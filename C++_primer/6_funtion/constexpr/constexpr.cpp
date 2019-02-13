/*************************************************************************
	> File Name: constexpr.cpp
	> Author: micheal.ma
	> Mail: micheal.ma@powervision.me
	> Created Time: 2019年02月11日 星期一 10时43分58秒
 ************************************************************************/

#include<iostream>
using namespace std;

/* 1.constexpr函数:返回类型; 形参都得是字面值类型.
 * 2.有且仅有一条return语句
 * 3.constexpr 与内联函数相同 都应该写在头文件中.
*/


constexpr int my_size(const int i)
{
    return i * 10;
}

int main(int argc,const char *argv[])
{
#if 1
    const int ret = 10;
    constexpr int i = my_size(ret);   /*因为my_size是一个constexpr函数 所以i是常量表达式*/
    
    char a[i]={'\0'};
    cout << sizeof(a) <<endl;
#endif

#if  0
    int i = 42;
    constexpr int a = my_size(i);
    char buf[a] = {'\0'};
    cout << sizeof(buf)<<endl;
#endif

    int tmp = 0;
    int value = my_size(tmp);      /*constexpr函数的返回值不一定真的是constexpr类型*/


    return 0;
}

