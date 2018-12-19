/*************************************************************************
	> File Name: 4.cpp
	> Author:micheal.ma
	> Mail: micheal.ma@powervision.me
	> Created Time: 2018年12月18日 星期二 09时36分46秒
 ************************************************************************/

#include<iostream>
#include "Sales_item.h"

using namespace std;

int main(int argc,const char *argv[])
{
    Sales_item total,trans;
    int cnt;

    if(std::cin >> total)
    {
        int cnt=1;
        while(std::cin >> trans)
        {
            if( total.isbn() == trans.isbn() )
            {
                total += trans;
                ++cnt;
            }
            else
            {
                std::cout << "the total is "<< total <<" cnt ="<< cnt <<std::endl;
                cnt =1;
                total=trans;
            }
        }
        std::cout << "the total is "<< total <<" cnt = "<< cnt <<std::endl;
    }
    else
    {
        std::cout << "nothing"<<std::endl;
    }
    return 0;
}

