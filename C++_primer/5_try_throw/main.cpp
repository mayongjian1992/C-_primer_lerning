/*************************************************************************
	> File Name: main.cpp
	> Author:micheal.ma
	> Mail: micheal.ma@powervision.me
	> Created Time: 2018年12月20日 星期四 17时13分55秒
 ************************************************************************/

#include<iostream>
#include "Sales_item.h"
using namespace std;

int main()
{
    Sales_item item1, item2;

    while(cin >> item1 >> item2)
    {
        try
        {
            if(item1.isbn() != item2.isbn() )
            {
                throw runtime_error("the two item must be same");
            }    
            cout << item1+item2 << endl;
        }
        catch (runtime_error err)
        {
            cout << err.what() << "\nyou input maby error input again ? Y/N ?" <<endl;
            char c;
            cin >> c;
            if(c=='N' || !cin)
            {
                break;
            }
        }
    }


    return 0;
}

