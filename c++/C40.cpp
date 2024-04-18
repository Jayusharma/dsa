//Sort o and 1 (all zeros to the left and ones to the right.)
#include<iostream>
#include<limits.h>
using namespace std;
int printArray(int arr[],int size)
{
  for (int  i = 0; i < size; i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}

int main(){
  int arr[]={0,1,1,0,0,1,0,1}; 

int n;
cout<<"enter the size of an array : ";
cin>>n;

int i=0;
int j=n-1;
int step=0;
while (i<j){

cout<<"Step "<<step++<<endl;
printArray(arr,n);
 
  while(arr[i]==0 && i<j)
  {
    i++;
    
  }
  while(arr[j]==1 && i<j)
  {
    j--;
   

  }
  if (i<j)
  {
     swap(arr[i],arr[j]);
    i++;
    j--;
     
  
  }
  
   
}
 cout<<"final updated array  "<<endl;
printArray(arr,n);
}


  
 
  
