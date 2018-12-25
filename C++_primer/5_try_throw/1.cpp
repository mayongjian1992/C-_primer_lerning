/*************************************************************************
	> File Name: 1.cpp
	> Author:micheal.ma
	> Mail: micheal.ma@powervision.me
	> Created Time: 2018年12月24日 星期一 10时03分52秒
 ************************************************************************/

#include<iostream>
#include <stdexcept>
#include <cctype>
using namespace std;

int main()
{
    char  value;
    while(cin >> value)
    {
        try
        {
            if(!isalpha(value))
            {
                throw runtime_error("input not a alpha");
            }
            else
            {
                continue;
            }
        }
        catch (runtime_error err)
        {
            cout << err.what() << "again ? [Y/N]"<<endl;
            char c ;
            cin >> c;
            if(c=='N' || !cin)
            {
                break;
            }
        }
    }

    cout << "the process is end"<<endl;
    return 0;
}

