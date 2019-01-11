/*************************************************************************
	> File Name: iterator_mid_test.cpp
	> Author:micheal.ma
	> Mail: micheal.ma@powervision.me
	> Created Time: 2019年01月07日 星期一 09时58分09秒
 ************************************************************************/

#include<iostream>
using std::cin; using std::cout; using std::endl;

#include <vector>
using std::vector;

int main(int argc,const char *argv[])
{
    vector<int> vInt;

    for(int i=0; i<=100; i+=2)
    {
        vInt.push_back(i);
    }

    auto beg=vInt.begin(), end=vInt.end();
    auto mid = beg + (end - beg)/2;
    
    int sort = 0;

    cin >> sort;
    
    while( *mid != sort && mid != end )
    {
        if(*mid < sort)
        {
            beg = mid+1;
        }
        else
        {
            end = mid;
        }

        mid = beg+(end - mid)/2;
    }


    if(*mid != sort && mid==end)
    {
        cout << "nothing"<<endl;
    }
    else
    {
        cout << "exist" <<endl;
    }
    
    
    return 0;
}

