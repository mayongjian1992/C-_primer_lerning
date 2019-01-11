/*************************************************************************
	> File Name: Sales_data.h
	> Author:micheal.ma
	> Mail: micheal.ma@powervision.me
	> Created Time: 2019年01月11日 星期五 16时45分50秒
 ************************************************************************/

#ifndef _SALES_DATA_H
#define _SALES_DATA_H

#include <iostream>
#include <string>

class Sales_data 
{
    friend std::istream& read(std::istream &is,Sales_data &data);
    friend std::ostream& print(std::ostream &os,const Sales_data &data);
    friend Sales_data add(const Sales_data &data1, const Sales_data &data2);

public:
    Sales_data(const std::string &str,unsigned cnt, double price):bookNo(str),saleCnt(cnt),revenue(price*cnt){}
    Sales_data():Sales_data("",0,0){}
    Sales_data(const std::string &str):Sales_data(str,0,0){}
    Sales_data(std::istream &is):Sales_data() { read(is,*this); }

    Sales_data& combine(const Sales_data &data);
    const std::string& isbn()const {return bookNo;}

private:
    std::string bookNo;
    unsigned saleCnt=0;
    double revenue=0.0;
    double avg_price()const { return saleCnt ? (revenue / saleCnt) : 0.0; }
};


std::istream& read(std::istream &is,Sales_data &data);
std::ostream& print(std::ostream &os,const Sales_data &data);
Sales_data add(const Sales_data &data1, const Sales_data &data2);





#endif
