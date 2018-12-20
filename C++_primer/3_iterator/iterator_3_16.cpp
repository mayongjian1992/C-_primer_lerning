/*************************************************************************
	> File Name: iterator_3_16.cpp
	> Author:micheal.ma
	> Mail: micheal.ma@powervision.me
	> Created Time: 2018年12月20日 星期四 11时53分46秒
 ************************************************************************/

#include<iostream>
#include <vector>
using namespace std;
int main()
{
    vector<string> vStr;
    string str;
    
    while(cin >>str)
    {
        vStr.push_back(str);
    }
    
    decltype(vStr.size()) sum=0;
    sum=vStr.cend()-vStr.cbegin();
    for(auto iter = vStr.cbegin(); iter != vStr.cend(); ++iter)
    {
        cout << *iter << ""; 
    }

    cout << endl;
    cout << "the vector sum  is "<<sum<<endl;


    return 0;
}

