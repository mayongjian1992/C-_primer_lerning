/*************************************************************************
	> File Name: Sales_data.h
	> Author:micheal.ma
	> Mail: micheal.ma@powervision.me
	> Created Time: 2018年12月25日 星期二 16时41分01秒
 ************************************************************************/

#ifndef _SALES_DATA_H
#define _SALES_DATA_H
#include <iostream>
using std::cout; using std::endl; using std::cin;

#include <string>
using std::string;

struct Sales_data 
{
    /*数据成员*/
    string bookNo;
    unsigned saleCnt=0;
    double revenue=0.0;


    /*成员函数*/
    const string& isbn() const 
    {
        return this->bookNo;
    }

    Sales_data& combine(const Sales_data &data);
    double avg_price() const;


    /*构造函数*/

    Sales_data()=default;
    Sales_data(const string &str):bookNo(str){}
    Sales_data(const string &str,unsigned cnt, double price) : bookNo(str),saleCnt(cnt),revenue(price * cnt){}
    Sales_data(std::istream& is);
};


Sales_data& Sales_data::combine(const Sales_data &data)
{
    saleCnt += data.saleCnt;
    revenue += data.revenue;
    return *this;
}

double Sales_data :: avg_price() const 
{
    if(saleCnt)
    {
        return (revenue / saleCnt);
    }
    else
    {
        return 0.0;
    }
}


std::istream& read(std::istream &is, Sales_data &data)
{
    double price;
    is>>data.bookNo>>data.saleCnt>>price;
    data.revenue=price * data.saleCnt;
    return is;
}


Sales_data::Sales_data(std::istream &is)
{
    read(is,*this);
}

std::ostream& print(std::ostream &os,const Sales_data &data)
{
    os << data.bookNo <<" "<<data.saleCnt << " "<<data.revenue<<" "<<data.avg_price()
    <<endl;
}

Sales_data add(const Sales_data &data1, const Sales_data &data2)
{
    Sales_data sum=data1;
    sum.combine(data2);
    return sum;
}

#endif
