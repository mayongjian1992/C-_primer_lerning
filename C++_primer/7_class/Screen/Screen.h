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

    Screen& set(char c)
    {
        contents[cursor]=c;
        return *this;
    }

    Screen& set(pos ht, pos wd, char c)
    {
        pos row=ht * width;
        contents[row+wd]=c;
        return *this;
    }

    size_t some_member(void) const
    {
        ++access_str;
        return access_str;
    }

    Screen& display(std::ostream &os);
    const Screen& display(std::ostream &os)const;
    
private:
    pos cursor=0;
    pos height=0, width=0;
    std::string contents;
    mutable size_t access_str=0;
    void do_display(std::ostream &os) const { os << contents <<std::endl; }

};

Screen& Screen::display(std::ostream &os)
{
    do_display(os);
    return *this;
}

const Screen& Screen::display(std::ostream &os)const
{
    do_display(os);
    return *this;
}


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
