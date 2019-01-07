/*************************************************************************
	> File Name: Sales_data.h
	> Author:micheal.ma
	> Mail: micheal.ma@powervision.me
	> Created Time: 2018年12月26日 星期三 10时03分19秒
 ************************************************************************/

#ifndef _SALES_DATA_H
#define _SALES_DATA_H
#include <iostream>

#include <string>

struct Sales_data 
{
    /*数据成员*/
    std::string bookNo;
    unsigned saleCnt=0;
    double revenue=0.0;


    /*成员函数*/
    const std::string& isbn()const {return bookNo;}
    Sales_data& combine(const Sales_data &data);
    double avg_price()const;


    /*构造函数*/
    Sales_data()=default;
    Sales_data(const std::string &str):bookNo(str){ std::cout << "Sales_data(string)"<<std::endl;  }
    Sales_data(const std::string &str,unsigned cnt, double price) : bookNo(str),saleCnt(cnt),revenue(price * saleCnt){}
    Sales_data(std::istream &is);
};



/*类外函数*/

std::istream& read(std::istream &is,Sales_data &data);


std::ostream& print(std::ostream &os,const Sales_data &data);


Sales_data add(const Sales_data &data1, const Sales_data &data2);


#endif
