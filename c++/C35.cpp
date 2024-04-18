//find non repeating elements
#include<iostream>
#include<limits.h>
using namespace std;

int main(){
  int array[]={1,2,3,2,3,1,5,6,7}; //given array 
  int size;
  cout<<"enter the size of an array: ";
  cin>>size;
  cout<<"Non repeating elements in an array are: ";
  for (int  i = 0; i <size; i++)
  {
    
    int p=0;
    for (int j = 0; j < size; j++)
    {
      if (i!=j && array[i]==array[j])
      {
        p=1;
        break;
      }
      
    }
    if (p==0)
    {
      cout<<array[i]<<" ";
    }
    
  }
  
  
}