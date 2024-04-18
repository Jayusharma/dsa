// selection sort 
#include <iostream>
#include <limits.h>

using namespace std;

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void selection(int arr[],int n){
   for (int i = 0; i < n-1; i++)
   {
    int minIndex=i;
    for (int j = i+1; j < n; j++)
    {
     if (arr[j]<arr[minIndex])
     {
       minIndex=j;
     }
     swap(arr[minIndex],arr[i]);
    }   
    
}
}
int main() {
    int even[5] = {1, 2, 8, 4, 0};
     
     selection(even,5);
     cout<<"selection sorted array is "<<endl;
     printArray(even,5);
   
}