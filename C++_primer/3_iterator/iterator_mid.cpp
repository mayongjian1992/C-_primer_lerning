/*************************************************************************
	> File Name: iterator_mid.cpp
	> Author:micheal.ma
	> Mail: micheal.ma@powervision.me
	> Created Time: 2018年12月20日 星期四 14时16分11秒
 ************************************************************************/

 #include <iostream>
 #include <vector>
 using namespace std;

 int main()
 {
     vector<int> vInt;

     for(int i=0; i<=100; ++i)
     {
         vInt.push_back(i);
     }

     auto beg=vInt.begin() , end=vInt.end();
     auto mid=beg + (end-beg)/2;
     
        
     int sort=0;

     cin >> sort;

     while(*mid != sort && mid != end )
     {
         if(*mid > sort)
         {
             end=mid;
         }
         else
         {
             beg=mid+1;
         }

         mid=beg+(end-beg)/2;
     }

     if(*mid != sort && mid==end)
     {
         cout << "nothing"<<endl;
     }
     else
     {
         cout << "exist"<<endl;
     }

     return 0;
 }
