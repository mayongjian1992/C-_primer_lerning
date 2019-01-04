/*************************************************************************
	> File Name: Screen.h
	> Author:micheal.ma
	> Mail: micheal.ma@powervision.me
	> Created Time: 2018年12月27日 星期四 10时12分39秒
 ************************************************************************/

#ifndef _SCREEN_H
#define _SCREEN_H

class Screen 
{
public:
    typedef std::string::size_type pos;
    Screen()=default;
    Screen(pos ht,pos wd):height(ht),width(wd),contents(ht*wd,' '){}
    Screen(pos ht,pos wd,char c):height(ht),width(wd),contents(ht*wd,c){}

    char get()const { return contents[currus];}
    inline char get(pos ht,pos wd)const;
    Screen& move(pos r,pos c);

    Screen& set(char c)
    {
        contents[cursor]=c;
        return *this;
    }


    Screen& set(pos ht,pos wd,char c)
    {
        pos row=ht * width;
        contents[row + wd] = c ;
        return *this;
    }

    Screen& display(std::ostream &os);
    const Screen& display(std::ostream &os)const;
    
private:
    pos currus=0;
    pos height=0, width=0;
    std::string contents;
    void do_display(std::ostream &os)const {os << contents << std::endl;}

};


#endif
