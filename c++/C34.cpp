//find the unique element (only one element is different rest are doubles )
#include<iostream>
#include<limits.h>
using namespace std;
int find(int arr[] , int size)
{
  int ans=0;
  for (int i = 0; i <size; i++)
  {
    ans=ans^arr[i];
  }
  return ans;
}
int main(){
  int array[8]={1,2,3,4,3,2,1};

  cout<<find(array,8);
}