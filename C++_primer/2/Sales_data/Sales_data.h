/*************************************************************************
	> File Name: Sales_data.h
	> Author:micheal.ma
	> Mail: micheal.ma@powervision.me
	> Created Time: 2018年12月19日 星期三 11时41分41秒
 ************************************************************************/

#ifndef _SALES_DATA_H
#define _SALES_DATA_H
#include <string>
struct Sales_data 
{
    std::string bookNo;
    unsigned cnt =0;
    double revenue=0.0;
};
#endif
