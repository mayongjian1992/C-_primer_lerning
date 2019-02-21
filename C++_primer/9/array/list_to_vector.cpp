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

    /*可以使用迭代器来 指定拷贝的范围  元素类型必须能够转化为所需类型*/
    vector<double> Vdouble(lint.cbegin() , lint.cend());

    for(auto &i : Vdouble)
    {
        cout << i << " ";
    }

    cout <<endl;


    list<int> lint2{10,20,30,40,50};
    vector<double> Vdouble2(++lint2.cbegin(),--lint2.cend() );
    for(auto &i : Vdouble2)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}

