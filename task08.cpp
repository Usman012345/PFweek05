#include<iostream>
#include<cmath>
using namespace std;
float calculation();
double height,lenght=43;
main()
{ 
  float x; 
  x=calculation();
  cout<<"The height of the tree is: "<<x;   
}
float calculation()
{
  height=43*tan(0.523598);
  return height;
}