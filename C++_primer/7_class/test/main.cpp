
/*************************************************************************
	> File Name: main.cpp
	> Author:micheal.ma
	> Mail: micheal.ma@powervision.me
	> Created Time: 2019年01月03日 星期四 10时49分30秒
 ************************************************************************/

#include<iostream>
using std::cin; using std::cout; using std::endl;
#include "Sales_data.h"
#include <string>
using std::string;


int main(int argc ,const char *argv[])
{
    Sales_data total;
    if( read(cin,total) )
    {
        Sales_data trans;
        while(read(cin, trans) )
        {
            if(trans.isbn() == total.isbn() )
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
        cout << "nothing"<<endl;
    }
    return 0;
}




