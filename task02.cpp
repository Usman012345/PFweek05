#include<iostream>
using namespace std;
main()
{
     char x;
     cout<<"Enter a character: ";
     cin>>x;
     if(isupper(x))
     {
        cout<<"The character you have entered is uppercase '"<<x<<"'";
     }
     if(islower(x))
     {
        cout<<"The character is lower case '" <<x<<"'";
     }

}