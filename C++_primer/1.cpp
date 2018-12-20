/*************************************************************************
	> File Name: 1.cpp
	> Author:micheal.ma
	> Mail: micheal.ma@powervision.me
	> Created Time: 2018年12月20日 星期四 16时29分41秒
 ************************************************************************/

#include<iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    string s1="mayongjiandasdaadasdasdasdasdasd";
    vector<int> vInt;
    vector<string> vStr;

    for(int i=0; i<10; i++)
    {
        vInt.push_back(i);
    }

    cout << sizeof(s1)<<endl;
    cout << sizeof(vInt)<<endl;
    cout << sizeof(vStr)<<endl;
    
    return 0;
}

