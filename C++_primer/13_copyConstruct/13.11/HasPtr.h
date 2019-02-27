/*************************************************************************
	> File Name: Point.h
	> Author: micheal.ma
	> Mail: micheal.ma@powervision.me
	> Created Time: 2019年02月18日 星期一 15时19分05秒
 ************************************************************************/

#ifndef _POINT_H
#define _POINT_H
#include <iostream>
#include <string>

class HasPtr 
{
public:
    HasPtr(const std::string &str = std::string()) : ps(new std::string(str)),i(0){ std::cout << "default constructor"<<std::endl; }
#if 1
    HasPtr(const HasPtr &hp) : ps( new std::string(*hp.ps)  ) , i(hp.i)
    {
        std::cout << "copy constructor"<<std::endl;
    }

    HasPtr& operator==(HasPtr& hp)
    {
        std::cout << "operator = "<<std::endl;
        ps = new std::string(*hp.ps);
        i=hp.i;
        return *this;
    }


#endif

    std::string& deref()const 
    {
        return *ps;
    }

    ~HasPtr()
    {
        std:: cout << "~HasPtr()"<<std::endl;
        delete ps;
    }

private:
    std::string *ps;
    int i;
};
#endif
