//find the intersection of two arrays.  
#include<iostream>
#include<limits.h>
using namespace std;

int main(){
  int arr[4]={1,2,3,3}; 
  int brr[2]={3,4}; 

  cout<<"Intersection of  an array is: ";
  for (int  i = 0; i <4; i++)
  {
    
    for (int j = 0; j < 2; j++)
    {
      if (arr[i]==brr[j])
      {
        cout<<arr[i]<<" ";
        brr[j]=INT_MIN;
        break;
        
      }
      
    }
    
    
  }
 
  
}