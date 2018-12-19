/*************************************************************************
> File Name: 3-6.cpp
> Author:micheal.ma
> Mail: micheal.ma@powervision.me
> Created Time: 2018年12月19日 星期三 15时58分10秒
************************************************************************/

#include<iostream>
#include <string>
using namespace std;

int main(int argc,const char *argv[])
{
    string s;

    getline(cin,s);

    if( !s.empty() )
    {
        for(auto &c : s )
        {
            c='X';
        }
        cout << s << endl;
    }
    else
    {
        cout << "input nothing"<<endl;

    }

    return 0;
}

