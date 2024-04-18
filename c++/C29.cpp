// finding out max and min value in array 
 #include <iostream>
 #include <limits.h>
 #include<math.h>  
using namespace std;

int getMax(int num[],int n){
  int max=INT_MIN;
  for (int i = 0; i<n; i++)
  {
    if (num[i]>max)
    {
      max=num[i];
    }
    
  }
  return max;
}
  int getMin(int num[],int n){
  int min=INT_MAX;
  for (int i = 0; i <n; i++)
  {
    if (num[i]<min)
    {
      min=num[i];
    }
    
  }
  return min;
}
int main(){
  int size;
  cout<<"enter the size: "<<endl;
  cin>>size;
  int num[100];
  cout<<"enter the elements: "<<endl;

  //taking input in array 
  for (int  i = 0; i <size; i++)
  {
   /*here we have an array of 100 but number
   elements in it is decided by size input*/
    cin>>num[i];

  }                  
    cout<<"Maximum value in an array is "<<getMax(num,size)<<endl;                              
    cout<<"Minimum value in an array is "<<getMin(num,size);                              
  
}