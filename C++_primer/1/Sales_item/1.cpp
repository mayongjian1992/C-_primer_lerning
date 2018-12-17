/*************************************************************************
	> File Name: 1.cpp
	> Author:micheal.ma
	> Mail: micheal.ma@powervision.me
	> Created Time: 2018年12月17日 星期一 13时55分36秒
 ************************************************************************/

#include<iostream>
#include "Sales_item.h"
using namespace std;

int main(int argc,const char *argv[])
{
    Sales_item item;

    while( std::cin >> item )
    {
        std::cout << item << std::endl;
    }
    return 0;
}
