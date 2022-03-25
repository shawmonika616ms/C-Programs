#include<iostream>
using namespace std;
#include "Factorial.cpp"
#include "Calculate.cpp"
int main()
{
    
    move:
    cout<<"1. for fact";
    cout<<"2. for sum";
    cout<<"3. for sub";
    cout<<"4. return";
    int c;
    cin>>c;
    switch(c)
    {
    case 1:
    int n;
    cout<<"Enter the number";
    cin>>n;
    cout<<fact(n);

                char c;
                cout<<"4. return";
                cin>>c;
                switch(c)
                {
                    case 'Y':
                    goto move;

                }
            
    break;
   

    case 2:
       int a,b;
       cout<<"Enter the a and b";
       cin>>a>>b;
       Calculate cal;
       cout<<cal.sum(a,b);
       break;

    case 3:
       int n1,n2;
       cout<<"Enter the a and b";
       cin>>n1>>n2;
       Calculate cal1;
       cout<<cal1.sub(n1,n2);
       break;  

 


       default:
       cout<<"Invalid";

    }
    

   
    

    return 0;
}