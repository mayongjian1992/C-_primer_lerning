/*************************************************************************
	> File Name: main.cpp
	> Author:micheal.ma
	> Mail: micheal.ma@powervision.me
	> Created Time: 2019年01月09日 星期三 11时41分02秒
 ************************************************************************/

#include<iostream>
#include <fstream>
#include "Sales_data.h"

using namespace std;

int main(int argc,const char *argv[])
{
    ifstream input(argv[1]);
    ofstream output(argv[2]);

    Sales_data total;
    if(read(input,total) )
    {
        Sales_data trans;
        while(read(input,trans) )
        {
            if(total.isbn() == trans.isbn() )
            {
                total.combine(trans);
            }
            else
            {
                print(output,total);
                total = trans;
            }
        } 
       
        print(output,total);
    }
    else
    {
        output << "nothing"<<endl;
    }
    return 0;
}

