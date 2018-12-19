/*************************************************************************
> File Name: 3-20-1.cpp
> Author:micheal.ma
> Mail: micheal.ma@powervision.me
> Created Time: 2018年12月19日 星期三 17时31分50秒
************************************************************************/

#include<iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec_int;
    int value=0;
    while(cin >> value)
    {
        vec_int.push_back(value);
    }

    if( !vec_int.empty() )
    {
        for( decltype(vec_int.size() ) i = 0 ; i < vec_int.size()-1 ; i+=2 )
        {
            int sum = vec_int[i] + vec_int[i+1];
            cout << sum<<" " ;
            if( (i+2) % 10 == 0 )
            {
                cout <<endl;
            }
        }

        cout << endl;


        if(vec_int.size() % 2 !=0 )
        {
            cout << vec_int[ vec_int.size()-1 ] <<endl;
        }
    }
    else
    {
        cout << "nothing"<<endl;
    }
    return 0;
}

