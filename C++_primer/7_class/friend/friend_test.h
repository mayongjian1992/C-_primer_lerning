/*************************************************************************
> File Name: friend_test.h
> Author:micheal.ma
> Mail: micheal.ma@powervision.me
> Created Time: 2018年12月28日 星期五 15时25分20秒
************************************************************************/

#ifndef _FRIEND_TEST_H
#define _FRIEND_TEST_H

#include <iostream>
#include <string>
#include <vector>

class Window_mgr                           /*1.定义 Window_mgr类  只声明clear函数而不定义*/
{
public:
    void clear();
};



class Screen                              /*2.定义 Screen 类 声明clear函数为友元*/
{
    friend void Window_mgr::clear(void);
public:
    using pos = std::string::size_type;
    Screen()=default;
    Screen(pos ht,pos wd,char c):height(ht),width(wd),contents(ht*wd,c){}

    Screen& display(std::ostream &os) { do_display(os); return *this; }


private:
    pos cursor=0;
    pos height=0,width=0;
    std::string contents;
    void do_display(std::ostream &os)const { os << contents << std::endl;}

};

void Window_mgr::clear()       /*最后定义函数的内容 令其操作screen类*/
{
    Screen s(10,10,'A');
    s.display(std::cout);
    s.contents=string(s.height * s.width,' ');
    s.display(std::cout);
}


#endif
