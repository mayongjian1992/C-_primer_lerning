/*************************************************************************
	> File Name: main.cpp
	> Author: micheal.ma
	> Mail: micheal.ma@powervision.me
	> Created Time: 2019年02月18日 星期一 16时32分06秒
 ************************************************************************/

#include<iostream>
#include "Sales_data.h"
using namespace std;

int main(int argc,const char *argv[])
{
    Sales_data data("mayongjian");
    Sales_data data2 = data;
    Sales_data data3(cin);
    data2 = data3;


    return 0;
}

