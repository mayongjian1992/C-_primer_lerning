/*************************************************************************
	> File Name: test1.cpp
	> Author:micheal.ma
	> Mail: micheal.ma@powervision.me
	> Created Time: 2019年01月04日 星期五 17时20分07秒
 ************************************************************************/

#include "Sales_data.h"

#include <string>
using std::string;
using std::cin;
int main(int argc,const char *argv[])
{
    #if 0
    Sales_data data1(cin);
    string null_book="00000-0000-0000";

    data1.combine(null_book);
    #endif

    string null_book="mayongjian";
    Sales_data data2=null_book;

    Sales_data data3=cin;

    return 0;
}

