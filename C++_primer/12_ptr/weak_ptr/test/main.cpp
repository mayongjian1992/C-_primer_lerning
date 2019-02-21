/*************************************************************************
	> File Name: main.cpp
	> Author: micheal.ma
	> Mail: micheal.ma@powervision.me
	> Created Time: 2019年02月19日 星期二 11时29分49秒
 ************************************************************************/

#include "StrBlob.h"

#include "StrBlobPtr.h"
using namespace std;

int main(int argc,const char *argv[])
{
    StrBlob blob( {"mayongjian","123366456","hahaha"} ) ;
    StrBlobPtr blobPtr(blob,2);

    return 0;
}

