/*************************************************************************
	> File Name: test.cpp
	> Author:micheal.ma
	> Mail: micheal.ma@powervision.me
	> Created Time: 2019年01月04日 星期五 16时51分44秒
 ************************************************************************/


#include "Sales_data.h"

using std::string;
using std::cin;

int main(int argc,const char *argv[])
{
    Sales_data data1;
    Sales_data data2(std::cin);
    Sales_data data3("mayongjian");
    Sales_data data4("mayongjian",2,10);
#if 0 
    string str="mayongjian";
    Sales_data data5 = str;
    Sales_data data6 = cin;
#endif


    return 0;
}
