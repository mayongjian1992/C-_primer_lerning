/*************************************************************************
	> File Name: Screen.h
	> Author:micheal.ma
	> Mail: micheal.ma@powervision.me
	> Created Time: 2019年01月03日 星期四 13时50分26秒
 ************************************************************************/

#ifndef _SCREEN_H
#define _SCREEN_H


class Screen 
{
public:
    using pos = std::string::size_type;
    Screen()=default;
    Screen(pos ht, pos wd, char c):height(ht),width(wd),contents(ht*wd,c){}
    Screen(pos ht, pos wd):height(ht),width(wd),contents(ht*wd,' '){}

    char get()const { return contents[cursor]; }
    inline char get(pos ht,pos c)const;
    Screen& move(pos ht,pos c);

    Screen& set(char c);
    Screen& set(pos ht, pos wd, char c);

    const Screen& display(std::ostream &os)const
    {
        do_display(os);
        return *this;
    }

    Screen& display(std::ostream &os)
    {
        do_display(os);
        return *this;
    }

private:
    pos cursor = 0;
    pos height=0, width=0;
    std::string contents;
    void do_display(std::ostream &os)const  { os<< contents <<std::endl; }
};

inline 
Screen& Screen::move(pos ht,pos c)
{
    pos row = ht * width;
    cursor = row +c;
    return *this;
}

char Screen::get(pos ht,pos c)const
{
    pos row = ht * width;
    return contents [row + c];
}

inline Screen& Screen::set(char c)
{
    contents[cursor]=c;
    return *this;
}

inline Screen& Screen::set(pos ht, pos wd,char c)
{
    pos row = ht * width;
    contents[row + wd]=c;
    return *this;
}

#endif
