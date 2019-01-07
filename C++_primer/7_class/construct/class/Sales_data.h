/*************************************************************************
	> File Name: Sales_data.h
	> Author:micheal.ma
	> Mail: micheal.ma@powervision.me
	> Created Time: 2018年12月26日 星期三 10时03分19秒
 ************************************************************************/

#ifndef _SALES_DATA_H
#define _SALES_DATA_H

#include <iostream>              /*头文件中不应该有using声明*/
#include <string>

class Sales_data 
{

/*友元函数声明  仅声明了函数的权限 并不是一条真正的函数声明 所以在类外必须有该函数的声明*/
    friend std::istream& read(std::istream &is,Sales_data &data);
    friend std::ostream& print(std::ostream &os,const Sales_data &data);
    friend Sales_data add(const Sales_data &data1, const Sales_data &data2);

public:
    /*成员函数*/
    const std::string& isbn()const {return bookNo;}
    Sales_data& combine(const Sales_data &data);

    /*构造函数*/

    /*接受三个构造函数的版本*/
    Sales_data(const std::string &str,unsigned cnt, double price) : bookNo(str),saleCnt(cnt),revenue(price * saleCnt){std::cout << "三个参数版本"<<std::endl;}
    
    /*委托构造函数*/
    Sales_data():Sales_data("",0,0){std::cout << "默认版本"<<std::endl;}
    
    /*只接受一个参数的构造函数 是转换构造函数 可以使用关键字 explicit 抑制隐市转换*/
     explicit Sales_data(std::string s):Sales_data(s,0,0){std::cout << "一个参数的版本"<<std::endl;}
     explicit Sales_data(std::istream &is):Sales_data()
                                            { read(is,*this);
                                                std::cout << "iostream 版本"<<std::endl;
                                             }
    

private:
    std::string bookNo;
    unsigned saleCnt=0;
    double revenue=0.0;
    double avg_price()const { return saleCnt ? (revenue/saleCnt):0.0; }
};



/*类外函数*/

std::istream& read(std::istream &is,Sales_data &data);


std::ostream& print(std::ostream &os,const Sales_data &data);

Sales_data add(const Sales_data &data1, const Sales_data &data2);


#endif
