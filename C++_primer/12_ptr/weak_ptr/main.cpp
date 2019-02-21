/*************************************************************************
	> File Name: main.cpp
	> Author: micheal.ma
	> Mail: micheal.ma@powervision.me
	> Created Time: 2019年02月15日 星期五 16时46分45秒
 ************************************************************************/

#include<iostream>
#include "StrBlob.h"
#include "StrBlobPtr.h"
using namespace std;


int main(int argc,const char *argv[])
{
    StrBlob blob( {"mayongjian","12345678","hello world"} );

    auto beg = blob.begin();
    auto end = blob.end();

    for(auto i = beg; neq(i,end); i.incr() )
    {
        cout << i.deref() <<endl;
    }
    



    return 0;
}

