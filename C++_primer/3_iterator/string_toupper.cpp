/*************************************************************************
	> File Name: string_toupper.cpp
	> Author:micheal.ma
	> Mail: micheal.ma@powervision.me
	> Created Time: 2018年12月20日 星期四 11时27分40秒
 ************************************************************************/

#include<iostream>
#include <string>
using namespace std;
int main()
{
    string str;

    getline(cin, str);

    for(auto iter=str.begin(); iter != str.end() && !isspace(*iter); ++iter)
    {
        *iter=toupper(*iter);
    }

    cout << str <<endl;
    return 0;
}

