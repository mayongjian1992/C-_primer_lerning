/*************************************************************************
	> File Name: 3-4.cpp
	> Author:micheal.ma
	> Mail: micheal.ma@powervision.me
	> Created Time: 2018年12月19日 星期三 14时44分21秒
 ************************************************************************/

#include<iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
int main(int argc,const char *argv[])
{

    string s1,s2;

    cin >> s1 >> s2;

    if(s1 == s2 )
    {
        cout << s1 << endl;
    }
    else
    {
        cout << "the two string is not same"<<endl;
        if(s1 > s2 )
        {
            cout << s1 << endl;
        }
        else
        {
            cout << s2 <<endl;
        }
    }

    return 0;
}
