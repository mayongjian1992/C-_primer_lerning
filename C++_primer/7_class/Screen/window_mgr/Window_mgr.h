/*************************************************************************
	> File Name: window_mgr.h
	> Author:micheal.ma
	> Mail: micheal.ma@powervision.me
	> Created Time: 2018年12月26日 星期三 16时00分07秒
 ************************************************************************/

#ifndef _WINDOW_MGR_H
#define _WINDOW_MGR_H

#include "Screen.h"
#include <vector>

class Window_mgr 
{
public:
    std::vector<Screen> screens{Screen(8,8),Screen(10,10,'M')};
    Window_mgr(){std::cout << "Window_mgr()"<<std::endl;}
};
#endif
