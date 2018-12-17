/*************************************************************************
	> File Name: 3.cpp
	> Author:micheal.ma
	> Mail: micheal.ma@powervision.me
	> Created Time: 2018年12月17日 星期一 14时05分07秒
 ************************************************************************/

#include<iostream>
#include "Sales_item.h"
using namespace std;

int main(int argc,const char *argv[])
{
    Sales_item total,trans;

    std::cout<<"please input the same items"<< std::endl;

    if(std::cin >> total)
    {
        while( std::cin >> trans )
        {
            if( compareIsbn(total, trans) )
            {
                total += trans;
            }
            else
            {
                std::cout << "isbn is not same"<<endl;
            }
        }

        std::cout << "the total is "<<total << std::endl;
        return 0;
    }
    else
    {
        cout << "nothing"<<endl;
        return -1;
    }

    return 0;
}

