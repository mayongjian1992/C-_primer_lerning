/*************************************************************************
	> File Name: main.cpp
	> Author:micheal.ma
	> Mail: micheal.ma@powervision.me
	> Created Time: 2019年01月11日 星期五 17时36分20秒
 ************************************************************************/

#include "Sales_data.h"
using namespace std;

int main(int argc,const char *argv[])
{
    Sales_data total;
    
    if(read(cin,total) )
    {
        Sales_data trans;
        while( read(cin,trans) )
        {
            if(total.isbn() == trans.isbn() )
            {
                total.combine(trans);
            }
            else
            {
                print(cout, total);
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

