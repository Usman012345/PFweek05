#include<iostream>
#include<windows.h>
using namespace std;
void number();
main()
{
 number(); 
}
void number()
{
  int a,b,c,d,e,f,g;
  cout<<"Enter a desired 5 digit no ";
  cin>>a;
  b=a%10;
  c=a/10;
  d=a/100;
  e=a/1000;
  f=a/10000;
  g=b+c+d+e+f;
  if(g%2==0)
  {
     cout<<"The entered number is evenish";
  }
  if(g%2!=0)
  {
     cout<<"The entered number is oddish";
  }
}