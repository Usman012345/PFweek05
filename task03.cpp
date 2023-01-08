#include<iostream>
#include<windows.h>
using namespace std;
void symmetrical(int);
main()
{
  int a;
  cout<<"Enter a desired 3 digit no: ";
  cin>>a; 
  symmetrical(a); 
}
void symmetrical(int x)
{
  int a,b,c;
  a=x%10;
  b=x/10;
  c=x/100;
  if(a==c)
   {
       cout<<"The entered number is symmetrical (true)";   
    }
  if(a!=c)
   {
      cout<<"The entered number is nonsymmetrical (false)";
   }
}