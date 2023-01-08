#include<iostream>
#include<cmath>
using namespace std;
float calculation();
float a=5,b=pow(6,2),c=1,d,x,y;
main()
{
    calculation();
  cout<<"The answer is "<<x <<" or "<<y;
  
}
float calculation()
{
    d=sqrt(b-4*a*c);
    x=-b+d/2*a;
    y=-b-d/2*a;
}