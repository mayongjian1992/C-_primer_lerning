/*************************************************************************
	> File Name: main.cpp
	> Author:micheal.ma
	> Mail: micheal.ma@powervision.me
	> Created Time: 2018年12月25日 星期二 16时36分41秒
 ************************************************************************/

#include<iostream>
using std::cout; using std::cin; using std::endl;

#include <string>
using std::string;


#include "Sales_data.h"


int main(int argc ,const char *argv[])
{
    Sales_data total;

    if(read(cin,total) )
    {
        Sales_data trans;
        while(read(cin,trans) )
        {
            if(total.isbn() == trans.isbn() ) 
            {
                total.combine(trans);
            }
            else
            {
                print(cout,total);
                total = trans;
            }
        }  
        print(cout,total);
    }
    else
    {
        cout << "nothing input"<<endl;
        return -1;
    }
    return 0;
}
