/*************************************************************************
	> File Name: 4.cpp
	> Author:micheal.ma
	> Mail: micheal.ma@powervision.me
	> Created Time: 2018年12月17日 星期一 14时36分30秒
 ************************************************************************/

#include<iostream>
#include "Sales_item.h"
using namespace std;

int main(int argc,const char *argv[])
{
    Sales_item item,total;
    
    if(std::cin >> total )
    {
        while(std::cin >> item)
        {
            
            if( compareIsbn( total, item) )
            {
                total += item;
            }
            else
            {
                std::cout << "the item total is "<< total << std::endl ;
                total=item; 
            }
        }
        
        std::cout << "the item total is "<< total << std::endl ;
        return 0;
    }
    else
    { 
        cout << "nothing"<<endl;
        return -1;
    }

    return 0;
}
