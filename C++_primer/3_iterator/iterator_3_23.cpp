/*************************************************************************
	> File Name: iterator_3_23.cpp
	> Author:micheal.ma
	> Mail: micheal.ma@powervision.me
	> Created Time: 2018年12月20日 星期四 13时59分27秒
 ************************************************************************/

#include<iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vInt;
    int value;
    while(cin >> value)
    {
        vInt.push_back(value);
    }

    for(auto iter=vInt.begin(); iter !=vInt.end(); ++iter) 
    {
        *iter *= 2;
    }

    for(auto i : vInt)
    {
        cout << i<<" ";
    }

    cout <<endl;

    return 0;
}

