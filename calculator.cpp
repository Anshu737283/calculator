#include<iostream>
using namespace std;

int main()
{
    int a,b,n;
    cout<<"enter the number";
    cin>>a>>b>>n;
    switch(n)
    {
        case 1:
        cout<<a+b;
       

        case 2:
        cout<<a-b;
         break;

        case 3:
        cout<<a*b;
       

        case 4:
        cout<<a/b;
      


        default:
        cout<<"entered number is invalid";
     
    }
    return 0;
}