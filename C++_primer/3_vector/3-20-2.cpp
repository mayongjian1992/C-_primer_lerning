/*************************************************************************
> File Name: 3-20-2.cpp
> Author:micheal.ma
> Mail: micheal.ma@powervision.me
> Created Time: 2018年12月19日 星期三 20时18分43秒
************************************************************************/

#include<iostream>
#include <vector>

using namespace std;

int main(int argc,const char *argv[])
{
    vector<int> vInt;
    int value=0;

    while(cin >> value)
    {
        vInt.push_back(value);
    }

    if(!vInt.empty())
    {
        int sum=0;
        for( decltype(vInt.size()) i=0; i < (vInt.size()-1)/2; ++i)
        {
            sum = vInt[i]+ vInt[vInt.size()-1-i];
            cout << sum <<" ";
            if( (i+1) % 5 ==0)
            {
                cout << endl;
            }
        }
        
        cout <<endl;
        
        if( vInt.size() % 2 != 0)
        {
            cout << vInt[(vInt.size()-1)/2]<<endl;
        }


    }
    else
    {
        cout << "nothing"<<endl;
    }

    return 0;
}

