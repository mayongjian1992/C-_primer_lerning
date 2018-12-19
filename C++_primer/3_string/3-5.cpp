/*************************************************************************
	> File Name: 3-5.cpp
	> Author:micheal.ma
	> Mail: micheal.ma@powervision.me
	> Created Time: 2018年12月19日 星期三 15时03分33秒
 ************************************************************************/

#include<iostream>
#include <string>
using namespace std;

int main()
{
    string total, s1;
    while(cin >> s1 )
    {
        total=total+s1;
        total=total + " ";
    }

    cout << total<<endl;
    return 0;
}



