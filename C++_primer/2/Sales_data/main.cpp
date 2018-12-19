/*************************************************************************
	> File Name: main.cpp
	> Author:micheal.ma
	> Mail: micheal.ma@powervision.me
	> Created Time: 2018年12月19日 星期三 11时45分42秒
 ************************************************************************/

#include<iostream>
#include "Sales_data.h"
#include <string.h>
using namespace std;

int main(int argc,const char *argv[])
{
    double price;
    Sales_data data1, data2;

    
    std::cin >> data1.bookNo >> data1.cnt >> price ;
    data1.revenue = price * data1.cnt;

    std::cin >> data2.bookNo >> data2.cnt >> price;
    data2.revenue = price * data2.cnt;
    if(data1.bookNo == data2.bookNo)
    {
        unsigned total = data1.cnt + data2.cnt;
        double totalRevenue = data1.revenue + data2.revenue;
        std::cout << data1.bookNo << " "<< total << " "<<totalRevenue<<std::endl;
        if(total != 0)
        {
            std::cout << totalRevenue/total << std::endl; 
        }
        else
        {
            std::cout << "nothing"<<std::endl; 
        }
        return 0;
    }
    else
    {
        std::cout << "the bookNo must be same"<<endl;
        return -1;
    }
    return 0;
}

