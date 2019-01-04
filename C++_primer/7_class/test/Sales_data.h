/*************************************************************************
	> File Name: Sales_data.h
	> Author:micheal.ma
	> Mail: micheal.ma@powervision.me
	> Created Time: 2019年01月03日 星期四 10时00分58秒
 ************************************************************************/

#ifndef _SALES_DATA_H
#define _SALES_DATA_H
#include <iostream>
#include <string>

class Sales_data 
{

    friend std::istream& read(std::istream& is,Sales_data &data);
    friend std::ostream& print(std::ostream& os, const Sales_data &data);
    friend Sales_data add(const Sales_data &data1,const Sales_data &data2);

public:
    Sales_data()=default;
    Sales_data(std::string str, unsigned cnt, double price):bookNo(str),saleCnt(cnt),revenue(cnt*price){}
    Sales_data(std::istream &is);

    const std::string isbn()const {return bookNo;}
    Sales_data& combine(const Sales_data &data)
    {
        saleCnt += data.saleCnt;
        revenue += data.revenue;
        return *this;
    }

private:
    std::string bookNo;
    unsigned saleCnt=0;
    double revenue=0.0;
    double avg_price(void) const {return saleCnt ? (revenue/saleCnt) : 0.0;}
};

std::istream& read(std::istream& is,Sales_data &data)
{
    double price;
    is >> data.bookNo >> data.saleCnt >> price; 
    data.revenue = price * data.saleCnt;
    return is;
}

Sales_data::Sales_data(std::istream &is)
{
    read(is,*this);
}

std::ostream& print(std::ostream& os, const Sales_data &data)
{
    os << data.bookNo << " " << data.saleCnt << " "<<data.revenue << " " << data.avg_price()<<std::endl;
    return os;
}


Sales_data add(const Sales_data &data1,const Sales_data &data2)
{
    Sales_data sum=data1;
    sum.combine(data2);
    return sum;
}


#endif
