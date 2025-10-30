#include<iostream>
using namespace std;
void prime(int a)
{    
    if(a<=1)
    {
        cout << a <<"is not a prime number";
    }
    else {
        bool isprime=true;
         for(int b=2;b<a;b++)
       { 
          if(a%b==0)
           {  
            isprime =false;
            break;
           }
        }
           if (isprime)
            cout<< a <<"is a prime number";
        else
        cout<< a <<" is not a prime";
    }
}
void palindrome(int c)
{
    int r=0;
    int rem,original;
    original=c;
    while(c!=0)
    {
      rem=c%10;
      r=r*10+rem;
      c=c/10;
    }
    if (original==r)
    cout<< original <<"is a palindrome";
    else 
    cout<< original <<"is not a palindrome " ;
    }
  
    void even(int k)
    {  if(k%2==0)
        {
            cout<< k <<"is a even number."<<endl;
        }
        else 
        {
            cout<< k <<"is a odd number."<<endl;
        }
    }
int main(){ int z;
    cout<<"1.Check prime number."<<endl;
    cout<<" 2.Check palindrome number."<<endl; 
    cout<<"3.Check even number."<<endl;
    cin>> z;
    switch (z)
{
case 1:
   {
     int n;
     cout<<"Enter the value:";
     cin >> n;
     cout<<"Checking the number is prime or not"<<endl;
     prime(n);
     break;
    }
    case 2:
    { 
        int d;
      cout<<"Enter the number:";
      cin>> d;
      cout<<"Checking the number is palindrome or not"<<endl;
      palindrome(d);
      break;
    }
    case 3:
   {
    int m;
    cout<<"Enter the number:";
    cin>> m;
    cout<<"Checking the number is odd or even."<<endl;
    even(m);
     break;
    }
default:
cout<<"Invalid number! Kindly press number between 1-3.";
    break;
}
    return 0;
}
