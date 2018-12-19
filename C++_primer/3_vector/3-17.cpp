/*************************************************************************
	> File Name: 3-17.cpp
	> Author:micheal.ma
	> Mail: micheal.ma@powervision.me
	> Created Time: 2018年12月19日 星期三 17时06分18秒
 ************************************************************************/

#include<iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    vector<string> vec_str;
    string trans;

    while(cin >> trans)
    {
        if( !trans.empty() )
        {
            vec_str.push_back(trans);
        }
    }

    for(auto &s : vec_str)
    {
        for(auto &c : s)
        {
            c=toupper(c);
        }
        cout <<s<<endl;
    }
    return 0;
}

