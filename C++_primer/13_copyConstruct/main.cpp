/*************************************************************************
	> File Name: main.cpp
	> Author: micheal.ma
	> Mail: micheal.ma@powervision.me
	> Created Time: 2019年02月18日 星期一 14时10分22秒
 ************************************************************************/

#include <iostream>
#include "StrBlob.h"
using namespace std;


StrBlob test_fun(StrBlob blob)
{
    return blob;
}


struct test_st
{
    StrBlob blob;
};

int main(int argc,const char *argv[])
{
    test_st stBlob = {{"mayongjian"}};
    return 0;
}

