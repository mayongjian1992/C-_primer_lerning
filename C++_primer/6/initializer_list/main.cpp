/*************************************************************************
	> File Name: main.cpp
	> Author:micheal.ma
	> Mail: micheal.ma@powervision.me
	> Created Time: 2018年12月24日 星期一 15时11分23秒
 ************************************************************************/

#include<iostream>
using std::cout; using std::endl; using std::cin;

#include <string>
using std::string;

#include <initializer_list>
using std::initializer_list;

#include "Sales_item.h"

void err_msg(Sales_item item,initializer_list<string> ls)
{
    cout << item << endl;
    for(auto it=ls.begin(); it != ls.end(); ++it)
    {
        cout << *it<<endl;
    }
    return ;
}

int main()
{
    Sales_item item("C++ Primer");
    
    err_msg(item, {"mayongjian","hahaha","xixixi"}); 
}
