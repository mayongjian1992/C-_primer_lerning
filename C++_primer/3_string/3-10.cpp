/*************************************************************************
	> File Name: 3-10.cpp
	> Author:micheal.ma
	> Mail: micheal.ma@powervision.me
	> Created Time: 2018年12月19日 星期三 16时11分09秒
 ************************************************************************/

#include<iostream>
#include <string>
#include <cctype>
using namespace std;
int main()
{
    string s;

    if(getline(cin,s))
    {
        for(auto c : s)
        {
            if( !ispunct(c) )
            {
                cout << c;
            }
        }
        cout << endl;
    }

    return 0;
}

