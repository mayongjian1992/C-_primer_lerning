/*************************************************************************
	> File Name: Sales_data.cpp
	> Author:micheal.ma
	> Mail: micheal.ma@powervision.me
	> Created Time: 2019年01月11日 星期五 17时25分18秒
 ************************************************************************/

#include "Sales_data.h"

Sales_data& Sales_data::combine(const Sales_data &data)
{
    saleCnt += data.saleCnt;
    revenue += data.revenue;
    return *this;
}


std::istream& read(std::istream &is,Sales_data &data)
{
    double price=0;
    is >> data.bookNo >> data.saleCnt >> price;
    data.revenue = price * data.saleCnt;
    return is;
}


std::ostream& print(std::ostream &os,const Sales_data &data)
{
    os << data.bookNo << " "<<data.saleCnt << " " << data.revenue
        <<" "<<data.avg_price()<<std::endl;
    return os;
}


Sales_data add(const Sales_data &data1,const Sales_data &data2)
{
    Sales_data sum;
    sum = data1;
    sum.combine(data2);
    return sum;
}
