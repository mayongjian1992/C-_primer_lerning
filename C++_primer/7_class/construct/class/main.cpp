/*************************************************************************
	> File Name: main.cpp
	> Author:micheal.ma
	> Mail: micheal.ma@powervision.me
	> Created Time: 2018年12月26日 星期三 13时48分49秒
 ************************************************************************/

#include "Sales_data.h"
using namespace std;

int main(int argc,const char *argv[])
{
    Sales_data total;

    if(read(cin,total) )
    {
        Sales_data trans;
        while(read(cin,trans) )
        {
            if(trans.isbn() == total.isbn() )
            {
                total.combine(trans);
            }
            else
            {
                print(cout,total);
                total=trans;
            }
        }
        print(cout,total);
    }
    else
    {
        cout << "input nothing"<<endl;
    }

    const Sales_data con_data;

    return 0;
}

