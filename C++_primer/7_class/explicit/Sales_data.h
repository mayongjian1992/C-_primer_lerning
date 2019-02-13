/*************************************************************************
	> File Name: Sales_data.h
	> Author: micheal.ma
	> Mail: micheal.ma@powervision.me
	> Created Time: 2019年02月12日 星期二 17时39分23秒
 ************************************************************************/

#ifndef _SALES_DATA_H
#define _SALES_DATA_H

#include <iostream>
#include <string>
class Sales_data
{

friend std::istream& read(std::istream &is,Sales_data &data);
public:
    Sales_data(std::string str,unsigned cnt, double price):bookNo(str),sale_cnt(cnt),revenue(price * cnt ){}
    Sales_data():Sales_data("",0,0){}
   
    explicit Sales_data(std::string str):Sales_data(str,0,0){}
    explicit Sales_data(std::istream &is):Sales_data()
    {
        read(is,*this);
    }

private:
    std::string bookNo;
    unsigned sale_cnt=0;
    double revenue = 0.0;
};

std::istream& read(std::istream &is,Sales_data &data)
{
    double price;
    is >> data.bookNo >> data.sale_cnt >>price;
    data.revenue = price * data.sale_cnt;
    return is;
}


#endif
