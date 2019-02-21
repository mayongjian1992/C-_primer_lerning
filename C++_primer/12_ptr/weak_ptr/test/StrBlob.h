/*************************************************************************
	> File Name: StrBlob.h
	> Author: micheal.ma
	> Mail: micheal.ma@powervision.me
	> Created Time: 2019年02月19日 星期二 11时03分11秒
 ************************************************************************/

#ifndef _STRBLOB_H
#define _STRBLOB_H

#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include <initializer_list>
#include <exception>


class StrBlobPtr;

class StrBlob 
{

    friend class StrBlobPtr;

public:
    typedef std::vector<std::string> :: size_type size_type;
    
    StrBlob();
    StrBlob(std::initializer_list<std::string>ls);
   
    size_type size()const { return data->size(); }
    bool empty()const { return data->empty(); }


    void push_back(const std::string &str) { data->push_back(str); }
    void pop_back();

    std::string& front();
    std::string& back();

private:
    std::shared_ptr<std::vector<std::string>> data;
    void check(size_t i, const std::string &msg )const;
};



inline void StrBlob::check(size_t i,const std::string &msg)const
{
    if( i>= data->size() )
    {
        throw std::out_of_range(msg);
    }
}

inline StrBlob::StrBlob() : data(std::make_shared<std::vector<std::string>>() ) {}

inline StrBlob::StrBlob(std::initializer_list<std::string> ls ) : data( std::make_shared<std::vector<std::string>> (ls) ) {}

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




#endif
