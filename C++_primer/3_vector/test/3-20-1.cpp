/*************************************************************************
> File Name: 3-20-1.cpp
> Author:micheal.ma
> Mail: micheal.ma@powervision.me
> Created Time: 2018年12月20日 星期四 10时47分39秒
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

    if( !vInt.empty() )
    {
        int sum=0;
        for(decltype(vInt.size())i=0; i<vInt.size()-1; i+=2 )
        {
            sum=vInt[i]+vInt[i+1];
            cout << sum << " ";
        }

        cout << endl;

        if(vInt.size() % 2 !=0)
        {
            cout << vInt[vInt.size()-1]<<endl;
        }

    }
    else
    {
        cout << "nothing"<<endl;
    }
    return 0;
}


