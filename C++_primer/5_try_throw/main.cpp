/*************************************************************************
> File Name: main.cpp
> Author:micheal.ma
> Mail: micheal.ma@powervision.me
> Created Time: 2018年12月21日 星期五 14时06分32秒
************************************************************************/

#include<iostream>
#include "Sales_item.h"
using namespace std;

int main(int argc,const char *argv[])
{
    Sales_item item1 , item2;

    while(cin >> item1 >> item2)
    {
        try
        {
            if(item1.isbn() != item2.isbn())
            {
                throw runtime_error("the two items's isbn must be same");
            }
            else
            {
                cout << item1 + item2 <<endl;
                break;
            }
        }
        catch(runtime_error error)
        {
            cout << error.what() <<"\ntry again ? [Y/N]"<<endl;
            cout <<">>>";
            char c;

            cin >> c;
            if(c=='N' | !cin)
            {
                break;    
            }
        }
    }

    return 0;
}

