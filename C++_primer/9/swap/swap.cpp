/*************************************************************************
	> File Name: swap.cpp
	> Author:micheal.ma
	> Mail: micheal.ma@powervision.me
	> Created Time: 2019年01月10日 星期四 11时30分09秒
 ************************************************************************/

#include<iostream>
#include <vector>
using namespace std;

int main(int argc,const char *argv[])
{
    vector<int> a{1,2,3,4,5};
    vector<int> b{6,7,8,9,10};

    swap(a,b);

    for(auto it : a)
    {
        cout << it << " ";
    }
    cout << endl;


    for(auto it : b)
    {
        cout << it << " ";
    }

    cout << endl;

    
    return 0;
}

