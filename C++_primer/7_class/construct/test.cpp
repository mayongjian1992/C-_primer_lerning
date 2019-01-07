/*************************************************************************
	> File Name: test.cpp
	> Author:micheal.ma
	> Mail: micheal.ma@powervision.me
	> Created Time: 2019年01月04日 星期五 14时31分37秒
 ************************************************************************/

#include<iostream>
using std::cout; using std::endl; using std::cin; 


#include "Sales_data.h"




int main(int argc, const char *argv[])
{
    Sales_data data1(cin);
    Sales_data data2(cin);

    if(data1.isbn() == data2.isbn())
    {
        data1.combine(data2).combine(data2);
    }

    print(cout,data1);
    return 0;
}
 
