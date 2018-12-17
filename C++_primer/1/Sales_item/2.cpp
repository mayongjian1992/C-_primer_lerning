/*************************************************************************
	> File Name: 2.cpp
	> Author:micheal.ma
	> Mail: micheal.ma@powervision.me
	> Created Time: 2018年12月17日 星期一 13时59分18秒
 ************************************************************************/

#include<iostream>
#include "Sales_item.h"
using namespace std;

int main(int argc,const char *argv[])
{
    Sales_item item1 , item2;
    while( std::cin >> item1 >> item2 )
    {
        if(item1.isbn() == item2.isbn() )
        {
            std::cout << item1 + item2 << std::endl;
        }
        else
        {
            std::cout << "the two isbn is not same"<<std::endl;
        }
    }

    return 0;
}

