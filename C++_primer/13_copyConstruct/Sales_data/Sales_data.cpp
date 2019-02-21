/*************************************************************************
> File Name: Sales_data.cpp
> Author:micheal.ma
> Mail: micheal.ma@powervision.me
> Created Time: 2019年01月04日 星期五 14时53分20秒
************************************************************************/

#include<iostream>
#include "Sales_data.h"


Sales_data& Sales_data::combine(const Sales_data &data)
{
    this->saleCnt += data.saleCnt;
    this->revenue += data.revenue;
    return *this;

}

#if 0
double Sales_data::avg_price()const 
{
    if(saleCnt)
    {
        return (revenue/saleCnt);

    }
    else
    {
        return 0.0;

    }

}
#endif


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

#if 0
Sales_data::Sales_data(std::istream &is)
{
    std::cout << "Sales_data(istream)"<<std::endl;
    read(is,*this);    

}
#endif
