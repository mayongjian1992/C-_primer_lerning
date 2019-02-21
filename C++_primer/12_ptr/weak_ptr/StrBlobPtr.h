/*************************************************************************
	> File Name: StrBlobPtr.h
	> Author: micheal.ma
	> Mail: micheal.ma@powervision.me
	> Created Time: 2019年02月15日 星期五 16时22分21秒
 ************************************************************************/

#ifndef _STRBLOBPTR_H
#define _STRBLOBPTR_H

#include "StrBlob.h"

class StrBlob;

class StrBlobPtr 
{
    friend bool eq(const StrBlobPtr&, const StrBlobPtr&);
public:
    StrBlobPtr() : curr(0) {}
    StrBlobPtr(StrBlob &a,size_t sz=0) : wptr(a.data),curr(sz) {}

    /*解引用*/
    std::string& deref()const;
   
    /*前++*/
    StrBlobPtr& incr();

private:
    std::weak_ptr<std::vector<std::string>> wptr;   /*私有数据成员 弱共享指针*/
    std::shared_ptr<std::vector<std::string>> check(std::size_t i , const std::string& str)const;
    std::size_t curr;                               /*用于记录下标*/
};


inline std::shared_ptr<std::vector<std::string>> 
StrBlobPtr :: check(std::size_t i,const std::string& str)const 
{
    auto ret = wptr.lock();
    if( !ret )
    {
        throw std::runtime_error("bad StrBlob");
    }

    if( i >= ret->size() )
    {
        throw std::out_of_range(str);
    }

    return  ret;
}

inline std::string& StrBlobPtr :: deref()const 
{
    auto p = check(curr,"deference past end");
    return (*p)[curr];
}

inline StrBlobPtr& StrBlobPtr :: incr()
{
    check(curr,"deference past end");
    ++curr;
    return *this;
}

inline StrBlobPtr StrBlob :: begin()
{
    return StrBlobPtr(*this);
}

inline StrBlobPtr StrBlob :: end()
{
    auto ret = StrBlobPtr(*this,data->size());
    return ret;
}

inline bool eq(const StrBlobPtr& lt, const StrBlobPtr& rt)
{
    auto l = lt.wptr.lock();
    auto r = rt.wptr.lock();   /*获取两个对象若指针所对应的共享指针*/
    
    /*若两个指针都为空或者都指向同一个元素*/
    if(l == r )        
    {
        return ( !r || lt.curr == rt.curr);
    }
    else
    {
        return false;
    }
}

inline bool neq(const StrBlobPtr& lt,const StrBlobPtr& rt)
{
    return !eq(lt,rt);
}


#endif


