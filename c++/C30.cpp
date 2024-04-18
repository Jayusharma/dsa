//find the sum of all elements of an array.
#include<iostream>
#include<limits.h>
using namespace std;

int main(){
  int size;
  cout<<"enter the size: "<<endl;
  cin>>size;
  int arr[100];
  cout<<"enter the elements : "<<endl;
  
   for (int i = 0; i <size ; i++)
   {
     cin>>arr[i];
   }
   int a=0;
   for (int i = 0; i < size; i++)
   {
    a=a+arr[i];
   }
   cout<<"the sum of all elements of an array is: "<<a;
   
   

   
   }
   
