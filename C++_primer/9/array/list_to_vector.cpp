/*************************************************************************
	> File Name: list_to_vector.cpp
	> Author: micheal.ma
	> Mail: micheal.ma@powervision.me
	> Created Time: 2019年02月02日 星期六 17时46分56秒
 ************************************************************************/

#include<iostream>
#include <list>
#include <vector>

using namespace std;
int main(int argc,const char *argv[])
{
    list<int> lint(10,20);
    vector<double> Vdouble(lint.cbegin() , lint.cend());

    for(auto &i : Vdouble)
    {
        cout << i << " ";
    }

    cout <<endl;

    return 0;
}

