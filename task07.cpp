#include<iostream>
#include<windows.h>
using namespace std;
int water();
int Rate,filled,liters,rate1,rate2,time,x;
main()
{ 
  cout<<"Enter the no of liters of the tank (1-10000): ";
  cin>>liters;
  cout<<"Enter the rate of flow of pipe1(1-5000): ";  
  cin>>rate1;
  cout<<"Enter the rate of flow of pipe2(1-5000): ";
  cin>>rate2;
  cout<<"Enter the time: ";
  cin>>time;
  water();
  if(filled>liters)
  {
     x=filled-liters;
     cout<<"for "<<time<<" hours the tank has overflown with " <<x<<" liters";
  }
  if(filled<liters)
  {
    cout<<filled<<" liters have been filled in "<<time<<" hours";
  }
}
int water()
{
  Rate=rate1+rate2;
  filled=Rate*time;
  return filled;
}