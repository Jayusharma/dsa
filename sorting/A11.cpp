// bubble sort 
#include <iostream>
#include <limits.h>

using namespace std;

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void bubble(int arr[],int n){
   for (int i = 1; i <n; i++)
   {
    for (int j = 0; j <n-i; j++)
    {
      
     if (arr[j]>arr[j+1])
     {
       swap(arr[j],arr[j+1]);
     }
     
    }   
    
}
}
int main() {
    int even[5] = {1, 2, 8, 4, 0};
     
     bubble(even,5);
     cout<<"bubble sorted array is "<<endl;
     printArray(even,5);
   
}