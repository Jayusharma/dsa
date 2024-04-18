//implementing pointers 
#include<iostream>
using namespace std;
int main()
{
    int num=2;
    int *p=&num;
    cout<<"num is "<<num<<endl;
    cout<<"num address is "<<&num<<endl;
    cout<<"pointer stored is "<<p<<endl;
    cout<<"pointer directing to "<<*p<<endl;

    //size of pointer 
    cout<<"size of num is "<<sizeof(num)<<endl;
    cout<<"size of pointer is "<<sizeof(p)<<endl;
    
    //copying pointer 
    int *q=p;
    cout<<"address stored in q is "<<q<<endl;
    cout<<"value stored in q is "<<*q<<endl;

    //increment and decrement via pointer 
    num++;
    cout<<"updated num is "<<num<<endl;
    p++;
    cout<<"updated p address is "<<p<<endl;

    //in array 
    int arr[10]={2,5,3,6,7};
    cout<<"address of arr is "<<arr<<endl;
    cout<<"address of 1st block is "<<&arr[0]<<endl;
    cout<<"address of 2nd block is "<<&arr[1]<<endl;
    cout<<"value at 1st : "<<*arr<<endl;
    cout<<"updated value is "<<*arr+1<<endl;
    cout<<"value at 2nd : "<<*(arr+1)<<endl;

    int *ptr= &arr[0];
     cout<<"address stored in ptr is "<<*ptr<<endl;
     //same as cout<<"address of 1st block is "<<&arr[0]<<endl;  .

     cout<<"address of ptr is "<<&ptr<<endl; 

     //implementing pointer in character.
     char ch[6]="abcde";
     cout<<"prinitng address of ch -> "<<ch<<endl;

     char *t=&ch[0];
     cout<<"printing address by pointer->"<<t<<endl;
     cout<<"value at 1 ->"<<*t<<endl;
     cout<<"updated value at 1 ->"<<*t+1<<endl;
     cout<<"value at 2 ->"<<*(t+1)<<endl;
     cout<<"value at 1 ->"<<*ch<<endl;
     cout<<"updated value at 1 ->"<<*ch+1<<endl;
     cout<<"value at 2 ->"<<*(ch+1)<<endl;
         
    }