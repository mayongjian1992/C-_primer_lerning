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

class Sales_data 
{

/*友元函数声明*/
    friend std::istream& read(std::istream &is,Sales_data &data);
    friend std::ostream& print(std::ostream &os,const Sales_data &data);
    friend Sales_data add(const Sales_data &data1, const Sales_data &data2);

public:
    /*成员函数*/
    const std::string& isbn()const {return bookNo;}
    Sales_data& combine(const Sales_data &data);

    /*构造函数*/
    Sales_data()=default;
    Sales_data(const std::string &str):bookNo(str){}
    Sales_data(const std::string &str,unsigned cnt, double price) : bookNo(str),saleCnt(cnt),revenue(price * saleCnt){}
    Sales_data(std::istream &is);

private:
    std::string bookNo;
    unsigned saleCnt=0;
    double revenue=0.0;
    double avg_price()const { return saleCnt ? (revenue/saleCnt):0.0; }
};



Sales_data& Sales_data::combine(const Sales_data &data)
{
    this->saleCnt += data.saleCnt;
    this->revenue += data.revenue;
    return *this;
}





/*类外函数*/

std::istream& read(std::istream &is,Sales_data &data)
{
    double price=0.0;
    is >> data.bookNo >> data.saleCnt >> price;
    data.revenue  = price * data.saleCnt;
    return is;
}


std::ostream& print(std::ostream &os,const Sales_data &data)
{
    os << data.bookNo << " "<<data.saleCnt << " "<<data.revenue<<" "<<data.avg_price()<<std::endl;
    return os;
}

Sales_data add(const Sales_data &data1, const Sales_data &data2)
{
    Sales_data sum = data1;

    sum.combine(data2);
    return sum;
}

Sales_data::Sales_data(std::istream &is)
{
    read(is,*this);    
}

#endif
