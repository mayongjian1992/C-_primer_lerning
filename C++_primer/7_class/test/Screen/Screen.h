/*************************************************************************
	> File Name: Screen.h
	> Author:micheal.ma
	> Mail: micheal.ma@powervision.me
	> Created Time: 2019年01月11日 星期五 19时02分21秒
 ************************************************************************/

#ifndef _SCREEN_H
#define _SCREEN_H

#include <iostream>
#include <string>


class Screen 
{
public:
    using pos = std::string::size_type;

    Screen()=default;
    Screen(pos ht,pos wd, char c):height(ht),width(wd),contents(ht*wd,c){}
    Screen(pos ht,pos wd):height(ht),width(wd),contents(ht*wd,' '){}

    char get()const { return contents[cursor]; }
    char get(pos ht,pos c);
    
    Screen& move(pos ht,pos c);
    Screen& display(std::ostream &os);
    const Screen& display(std::ostream &os)const;



private:
    pos cursor = 0;
    pos height=0, width=0;
    std::string contents;
    void do_display(std::ostream &os)const { os << contents << std::endl; }
};


inline
char Screen::get(pos ht,pos c)
{
    pos row = ht * width;
    return contents[row + c ];
}

inline
Screen& Screen::move(pos ht, pos c)
{
    pos row = ht * width;
    cursor = row + c;
    return *this;
}

inline
Screen& Screen::display(std::ostream &os)
{
    do_display(os);
    std::cout << "Screen& Screen::display(std::ostream &os)"<<std::endl;
    return *this;
}
inline
const Screen& Screen::display(std::ostream &os)const 
{
    do_display(os);
    std::cout << "const Screen& Screen::display(std::ostream &os)const"<<std::endl;
    return *this;
}
#endif

