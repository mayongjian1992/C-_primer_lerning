/*************************************************************************
	> File Name: 8.1.cpp
	> Author:micheal.ma
	> Mail: micheal.ma@powervision.me
	> Created Time: 2019年01月09日 星期三 10时40分20秒
 ************************************************************************/

#include<iostream>
using namespace std;
#include <stdexcept>  /*stdexcept 标准异常库*/

istream& fun(istream &is)
{
    int v=0;
    while(is>>v,!is.eof())     /*只要不是eof就一直输入*/
    {
        if( is.bad() )            /*如果遇到系统及错误 抛出异常 程序终止*/
        {
            throw runtime_error("io fail...");
        }
        if(is.fail() )            /*如果遇到 输入类型错误等 将流的状态置位 重新输入*/
        {
            cerr << "the data type is error, please try again"<<endl;
            is.clear();
            is.ignore(100,'\n');
            continue;
        }
        cout << v << endl;         /*打印输出*/
    }

    is.clear();                   /*循环结束 流状态置位*/
    return is;                    /*返回该流的引用*/

}


int main(int argc,const char *argv[])
{
    fun(std::cin);
    return 0;
}
