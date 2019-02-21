/*************************************************************************
	> File Name: Employee.h
	> Author: micheal.ma
	> Mail: micheal.ma@powervision.me
	> Created Time: 2019年02月20日 星期三 20时40分46秒
 ************************************************************************/

#ifndef _EMPLOYEE_H
#define _EMPLOYEE_H

#include <iostream>
#include <string>

using namespace std;

class Employee 
{
private:
    static int sn;

public:
    Employee() { mysn = ++sn; } 
    Employee(const std::string& s) { name = s; mysn = ++sn; }
    Employee( Employee &e ) { name=e.name; mysn = ++sn; }
    Employee& operator==(Employee &e) 
    {
        name = e.name;
        return *this;
    }

    const std::string& get_name() { return name; }
    int get_mysn()  { return mysn; }
    
private:
    std::string name;
    int mysn;

};

int Employee::sn = 0;

void f(Employee &s)
{
    std::cout << s.get_name() << ":" <<s.get_mysn()<<std::endl;
}

int main(int argc,const char *argv[])
{
    Employee a("ma"),b=a,c;
   
    c = b;
   
    f(a);
    f(b);
    f(c);
    return 0;
}

#endif
