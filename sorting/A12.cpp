// insertion sort 
#include <iostream>
#include <limits.h>

using namespace std;

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void insertion(int arr[],int n){
   for (int i = 1; i <n; i++)
   {
    int temp=arr[i];
    cout<<"value compared is "<<temp<<endl;
    int j=i-1;
    while (j>=0)
    {
      if (arr[j]>temp)
      {
        arr[j+1]=arr[j];
      }
      else{
        break;
      }
      j--;
     cout<<"j updated value is "<<j<<endl;
    arr[j+1]=temp;
}
   }
}
int main() {
    int even[5] = {1, 2, 8, 4, 0};
   
     
     insertion(even,5);
     cout<<"insertion sorted array is "<<endl;
     printArray(even,5);
   
}