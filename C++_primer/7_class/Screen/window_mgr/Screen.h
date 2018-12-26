/*************************************************************************
	> File Name: Screen.h
	> Author:micheal.ma
	> Mail: micheal.ma@powervision.me
	> Created Time: 2018年12月26日 星期三 14时57分02秒
 ************************************************************************/

#ifndef _SCREEN_H
#define _SCREEN_H
#include <iostream>
#include <string>


class Screen 
{
public:
    /*类型成员*/
    typedef std::string::size_type pos;
    
    /*构造函数*/
    Screen()=default;
    Screen(pos ht,pos wd) : height(ht),width(wd),contents(ht * wd, ' '){std::cout << "Screen(pos,pos)"<<std::endl;}
    Screen(pos ht, pos wd, char c) : height(ht),width(wd),contents(ht*wd,c){std::cout<<"Screen(pos,pos,char)"<<std::endl;}

    /*成员函数*/
    char get()const { return contents[cursor]; }
    inline char get(pos ht, pos wd )const;
    Screen& move(pos r, pos c);

    size_t some_member(void) const
    {
        ++access_str;
        return access_str;
    }
    
private:
    pos cursor=0;
    pos height=0, width=0;
    std::string contents;
    mutable size_t access_str=0;
};


char Screen::get(pos r,pos c)const
{
    pos row = r * width;
    return contents[row+c];
}

inline Screen& Screen::move(pos r, pos c)
{
    pos row = r * width;
    cursor = row + c ;
    return *this;
}

#endif
