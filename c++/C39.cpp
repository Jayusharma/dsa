//find the sum of pair of element equal to key.
#include<iostream>
#include<limits.h>
using namespace std;

int main(){
  int arr[6]={0,1,2,3,4,5}; 
  int size;
  cout<<"enter the size of an array: ";
  cin>>size;
  int key;
  cout<<"enter the key element: ";
  cin>>key;
  cout<<"pairs are :"<<endl;
  for (int i = 0; i <size; i++)
  {
    for (int j = i+1; j < size; j++)
    {
     if (i<j && arr[i]+arr[j]==key)
     {
      cout<<arr[i]<<" and "<<arr[j]<<" is equal to "<<key<<endl;
     }
     
    }
    
  }
  
  
}
