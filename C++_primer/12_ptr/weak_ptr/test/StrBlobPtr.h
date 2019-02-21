/*************************************************************************
	> File Name: StrBlobPtr.h
	> Author: micheal.ma
	> Mail: micheal.ma@powervision.me
	> Created Time: 2019年02月19日 星期二 11时38分26秒
 ************************************************************************/

#ifndef _STRBLOBPTR_H
#define _STRBLOBPTR_H

#include "StrBlob.h"

class StrBlobPtr 
{
public:
    StrBlobPtr() : curr(0){}
    StrBlobPtr(const StrBlob &a,size_t sz = 0) :
    wptr(a.data),curr(sz) {}

    std::string& deref()const;

    StrBlobPtr& incr();

private:
    std::weak_ptr<std::vector<std::string>> wptr;
    std::shared_ptr<std::vector<std::string>> check(size_t i,const std::string& str)const;
    int curr;
};

inline std::shared_ptr<std::vector<std::string>>
StrBlobPtr :: check(size_t i, const std::string& str)const
{
    auto ret = wptr.lock();
    if(!ret)
    {
        throw std::runtime_error("bad StrBlob");
    }

    if(i >= ret->size())
    {
        throw std::out_of_range(str);
    }
    return ret;
}

inline std::string& StrBlobPtr :: deref()const 
{
    auto p = check(curr,"dereference past end");
    return (*p)[curr];
}

inline StrBlobPtr& StrBlobPtr :: incr()
{
    check(curr,"dereference past end");
    ++curr;
    return *this;
}




#endif
