#include<iostream>
#include<windows.h>
using namespace std;
float number();
main()
{
 int no=number();
 cout<<"Your number is: "<<no;  
}
float number()
{
   int num,result;
   cout<<"Enter the desired number: ";
   cin>>num;
   result=num*5;
   return(result);
}