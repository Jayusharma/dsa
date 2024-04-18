#include<iostream>
using namespace std;

void print(int arr[],int size ){

    for (int i = 0; i < size; i++)
   {
    cout<<arr[i]<<" ";
   }
   cout<<endl;
}

void bubble(int* arr,int size){
    //base case 
    if(size==1 || size==0 )
    return;

for (int  i = 0; i < size-1; i++)
{
   if(arr[i]>arr[i+1]){
   swap(arr[i],arr[i+1]);
   }
}
 return bubble(arr,size-1);
}

void selection(int* arr,int size ){
    //base case 
    if(size==1 || size==0 )
    return;

       int i=0;
       int min=i;
        for (int j = i+1; j < size ; j++)
        {
            if (arr[j]<arr[min])
            {
               min=j;
            }
            swap(arr[min],arr[i]);
        
    }
    return selection(arr+1,size-1);
}
void insertion(int* arr,int n){

     if (n <= 1)
        return;

   insertion(arr, n - 1);
  
    int key = arr[n - 1];
    int j = n - 2;
   
   while (j >= 0 && arr[j] > key) {
        arr[j + 1] = arr[j];
        j--;
    }

   
    arr[j + 1] = key;
}
   

int main()
{
    int arr[6]={10,1,7,6,14,9};
    int brr[6]={7,1,21,6,14,5};
    int crr[6]={11,1,54,6,4,9};
    int size=6;
   bubble(arr,size);
  print(arr,size);

  selection(brr,size);
    print(brr,size);

   insertion(crr,size);
   print(crr,size);
}
    