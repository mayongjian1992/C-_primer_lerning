/*************************************************************************
	> File Name: Sales_data.cpp
	> Author:micheal.ma
	> Mail: micheal.ma@powervision.me
	> Created Time: 2019年01月04日 星期五 15时19分15秒
 ************************************************************************/

#include "Sales_data.h"


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


