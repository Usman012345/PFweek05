#include<iostream>
#include<windows.h>
using namespace std;
int time();
main()
{
  time();  
}

int time()
{
   int a,b,c,d;
   
   cout<<"Enter the time in hours: ";
   cin >> a;
   
   if(a > 23)
   {
      cout<<"The time entered is not correct";
      return 0;
   }
   cout<<"Enter the time in mins: ";
   cin>>b;
   
   if(b>59)
   {
      cout<<"The time entered is not correct";
      return 0;
   }
   b=b+15;
   
   if(b<60)
      {
         
         cout<<"The time after 15 mins is: "<<a<<":" <<b;  
      }
   if(b>60)
   {
      c=b-60;
      a=a+1;
      if(a>23)
         {
            a=0;
         }
      cout<<"The time after 15 mins is: "<<a<<":" <<c;
   }
   
}