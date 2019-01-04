/*************************************************************************
	> File Name: Person.h
	> Author:micheal.ma
	> Mail: micheal.ma@powervision.me
	> Created Time: 2018年12月25日 星期二 15时55分04秒
 ************************************************************************/

#ifndef _PERSON_H
#define _PERSON_H

#include <iostream>
using std::cout; using std::cin; using std::endl;

#include <string>
using std::string;

struct Person 
{
    string name;
    string address;

    const string& getName(void) const;
    const string& getAddress(void) const;
    
    int setName(const string &name);
    int setAddress(const string &address);

    /*构造函数*/
    Person()=default;
    Person(const string &name, const string &address) : name(name),address(address){}

};

int Person::setName( string &name)
{
    this->name=name;
    return 0;
}

int Person::setAddress(const string &address)
{
    this->address=address;
    return 0;
}

const string& Person::getName(void) const
{
    return this->name;
}

const string& Person::getAddress(void) const
{
    return this->address;
}




#endif
