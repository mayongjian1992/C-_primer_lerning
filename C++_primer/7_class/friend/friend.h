/*************************************************************************
	> File Name: friend.h
	> Author: micheal.ma
	> Mail: micheal.ma@powervision.me
	> Created Time: 2019年02月12日 星期二 15时44分59秒
 ************************************************************************/

#ifndef _FRIEND_H
#define _FRIEND_H

class Person 
{

friend void printInfo(const Person& per)
        {
            std::cout <<"friend void printInfo(const Person& per)"<<std::endl;
            std::cout << per.name<< " "<<per.age <<" "<<per.work<<std::endl;
        }

private:
    std::string name;
    int age=0;
    std::string work;
public:
    Person()=default;
};

void printInfo(const Person &per);


#endif
