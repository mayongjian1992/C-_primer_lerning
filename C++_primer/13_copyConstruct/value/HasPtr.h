/*************************************************************************
	> File Name: HasPtr.h
	> Author: micheal.ma
	> Mail: micheal.ma@powervision.me
	> Created Time: 2019年02月21日 星期四 14时57分01秒
 ************************************************************************/

#ifndef _HASPTR_H
#define _HASPTR_H

#include <iostream>
#include <string>


class HasPtr 
{

public:
    HasPtr(const std::string &s = std::string() ) :
        ps(new std::string(s)), i(0) {}

    HasPtr(const HasPtr &hp ) : ps(new std::string( *(hp.ps) ) ), i(hp.i){}
    
    HasPtr& operator=(const HasPtr& hp);

    ~HasPtr();

    std::string& deref()const 
    {
        return *(ps);
    }

private:
    std::string *ps;
    int i;
};

#if 0
HasPtr& HasPtr :: operator=(const HasPtr &hp)
{
    std::string *tmpStr = new std::string( *(hp.ps) );
    delete ps;
    ps = tmpStr;
    i = hp.i;
    return *(this);
}
#endif

HasPtr& HasPtr :: operator=(const HasPtr &hp)
{
    delete ps;
    ps = new std::string( *(hp.ps) ); 
    i = hp.i;
    return *this;
}

HasPtr :: ~HasPtr()
{
    delete ps;
}

#endif
