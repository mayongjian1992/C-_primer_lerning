/*************************************************************************
	> File Name: main.cpp
	> Author:micheal.ma
	> Mail: micheal.ma@powervision.me
	> Created Time: 2018年12月25日 星期二 17时15分54秒
 ************************************************************************/

#include<iostream>
#include <string>
#include "Person.h"
using namespace std;

int main(int argc, const char *argv[])
{
    Person per;
    per.setName("zhangsan");
    per.setAddress("beijingshi");
    
    cout << per.getName() << " "<<per.getAddress()<<endl;
    return 0;
}

