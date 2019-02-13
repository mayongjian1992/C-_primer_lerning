/*************************************************************************
	> File Name: main.cpp
	> Author: micheal.ma
	> Mail: micheal.ma@powervision.me
	> Created Time: 2019年02月12日 星期二 17时48分37秒
 ************************************************************************/

#include<iostream>
#include "Sales_data.h"
using namespace std;

void test_fun(Sales_data data)
{
    return ;
}


int main(int argc,const char *argv[])
{
    string null_book = "mayongjian";
    Sales_data item = static_cast<Sales_data>(null_book);
    test_fun(item);
    return 0;
}

