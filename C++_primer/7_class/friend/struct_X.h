/*************************************************************************
	> File Name: struct_X.h
	> Author: micheal.ma
	> Mail: micheal.ma@powervision.me
	> Created Time: 2019年02月12日 星期二 16时02分19秒
 ************************************************************************/

#ifndef _STRUCT_X_H
#define _STRUCT_X_H

struct X
{
   friend void fun(){ std::cout << "fun()"<<std::endl; }
   void fun1();
};

void fun();
void X::fun1(){ fun();  return;}

#endif
