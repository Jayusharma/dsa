//Sort o and 1 and 2 (all zeros to the left and twos to the right and one between.)
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
  int arr[]={0,1,0,1,2,1,0,2}; 

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
  while(arr[j]==1 || arr[j]==2 && i<j )
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

 i=0;
j=n-1;
int nextStep=0;
while (i<j)
{ 
  cout<<"nextStep "<<nextStep++<<endl;
printArray(arr,n);
  
  while(arr[i]==0 || arr[i]==1 && i<j)
  {
    i++;
    
  }
  while( arr[j]==2 && i<j )
  {
    j--;
   

  }
  if (i<j)
  {
     swap(arr[i],arr[j]);
    i++;
    j--;
     
  
  }
  cout<<"updated array is "<<endl;
printArray(arr,n);
}


 
}


  
 
  
