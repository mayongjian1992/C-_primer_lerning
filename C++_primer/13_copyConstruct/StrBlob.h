/*************************************************************************
	> File Name: StrBlob.h
	> Author: micheal.ma
	> Mail: micheal.ma@powervision.me
	> Created Time: 2019年02月15日 星期五 11时47分04秒
 ************************************************************************/

#ifndef _STRBLOB_H
#define _STRBLOB_H

#include <string>
#include <vector>
#include <initializer_list>
#include <memory>
#include <exception>

class StrBlobPtr;

class StrBlob 
{
    friend class StrBlobPtr;
public:
    using size_type = std::vector<std::string>::size_type;

    StrBlob();
    StrBlob(std::initializer_list<std::string> ls);
    StrBlob(const StrBlob &);
    
    
    size_type size()const { return data->size(); }
    bool empty()const { return data->empty(); }

    void push_back(std::string& str) { data->push_back(str); }
    void pop_back();

    std::string& front();
    std::string& back();

    const std::string& front()const;
    const std::string& back() const;

    StrBlobPtr begin();
    
    StrBlobPtr end();

    bool eq(const StrBlobPtr& lt , const StrBlobPtr& rt);
    bool neq(const StrBlobPtr& lt, const StrBlobPtr& rt);


private:
    std::shared_ptr<std::vector<std::string>> data;
    void check(size_type i, const std::string& str)const;
};

inline StrBlob::StrBlob():data( std::make_shared<std::vector<std::string>>() ){ std::cout<<"StrBlob()"<<std::endl; }

inline StrBlob::StrBlob(std::initializer_list<std::string> ls) : data( std::make_shared<std::vector<std::string>>(ls) ){ std::cout << "StrBlob(initializer_list)"<<std::endl; }


inline StrBlob :: StrBlob(const StrBlob &blob)
{
    std :: cout << "copy construct function"<< std :: endl;
}

inline void StrBlob::check(size_type i, const std::string& str)const 
{
    if(i >= data->size())
    {
        throw std::out_of_range(str);
    }
}


inline void StrBlob :: pop_back()
{
    check(0,"pop_back on empty StrBlob");
    data->pop_back();
}

inline std::string& StrBlob :: front()
{
    check(0,"front on empty StrBlob");
    data->front(); 
}


inline std::string& StrBlob :: back()
{
    check(0,"back on empty StrBlob");
    data->back();
}


inline const std::string& StrBlob :: front() const
{
    check(0,"front on empty StrBlob");
    data->front(); 
}


inline const std::string& StrBlob :: back() const 
{
    check(0,"back on empty StrBlob");
    data->back();
}





#endif

