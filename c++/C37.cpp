//find duplicate elements
#include<iostream>
#include<limits.h>
using namespace std;

int main(){
  int array[]={2,1,3,6,2,3,5,6}; //given array 
  int size;
  cout<<"enter the size of an array: ";
  cin>>size;
  cout<<"duplicate elements in an array are: ";
  for (int  i = 0; i <size; i++)
  {
    
    
    for (int j = i; j < size; j++)
    {
      if (i!=j && array[i]==array[j])
      {
        cout<<array[i]<<" ";
        break;
      }
      
    }
    
    
  }
  
  
}