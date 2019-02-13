/*************************************************************************
	> File Name: main.cpp
	> Author:micheal.ma
	> Mail: micheal.ma@powervision.me
	> Created Time: 2018年12月26日 星期三 13时48分49秒
 ************************************************************************/

#include "Sales_data.h"
#include <fstream>
using namespace std;

int main(int argc,const char *argv[])
{
    fstream input(argv[1],ifstream::in);
    fstream output(argv[2], ofstream::out | ofstream::trunc);
    
    if(!input || !output)
    {
        cerr<< "some stream error"<<endl;
        return -1;
    }
    
     
    Sales_data total;

    if(read(input,total) )
    {
        Sales_data trans;
        while(read(input,trans) )
        {
            if(trans.isbn() == total.isbn() )
            {
                total.combine(trans);
            }
            else
            {
                print(output,total);
                total=trans;
            }
        }
        print(output,total);
    }
    else
    {
        cout << "input nothing"<<endl;
    }


    return 0;
}

