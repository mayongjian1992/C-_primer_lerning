/*************************************************************************
> File Name: Sales_data.h
> Author:micheal.ma
> Mail: micheal.ma@powervision.me
> Created Time: 2018年12月25日 星期二 13时45分41秒
************************************************************************/

#ifndef _SALES_DATA_H
#define _SALES_DATA_H

#include <iostream>
using std::cout; using std::cin; using std::endl;

#include <string>
using std::string;

struct Sales_data
{
    string bookNo;
    unsigned saleCnt=0;
    double revenue=0.0;

    const string &isbn(void) const
    {
        return this->bookNo;
    }

    Sales_data& combine(const Sales_data &data);
};


Sales_data& Sales_data::combine(const Sales_data &data)
{
    this->saleCnt += data.saleCnt;
    this->revenue += data.revenue;
    return *this;
}

std::istream& read(std::istream &in, Sales_data &data)
{
    in >> data.bookNo >> data.saleCnt >> data.revenue;
    return in;
}

std::ostream& print(std::ostream &o, const Sales_data &data)
{
    o << data.bookNo << " " << data.saleCnt <<" "<<data.revenue<<endl;
    return o;
}





#endif
