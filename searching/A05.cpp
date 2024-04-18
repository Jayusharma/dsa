//search the  element in the rotated sorted array.
#include<iostream>
#include<limits.h>
using namespace std;

int pivot(int arr[], int size )
{
    int start=0;
    int end=size-1;
    //finding mid in an first array.
    int mid=(start+end)/2;
    while (start<end)
    {
        if (arr[mid]>arr[0])
        {
         start=mid+1;
            
        }
        
        else {
            end=mid; //for last rotated element (9) end becomes mid-1.
        }
         mid=(start+end)/2;
         
         cout<<endl;
        }
        
        return mid;
    
}
int binarySearch(int arr[], int s , int e,int key)
{
    int start=s;
    int end=e;
    //finding mid in an first array.
    int mid=start+( end-start)/2;
    while (start<=end)
    {
        if (arr[mid]==key)
        {
            return mid;
        }
        
        //choosing parts 
        //for the right part
        if (key>arr[mid])
        {
            start=mid+1;
        }
        //for left part
        else{
            end=mid-1;
        }
         mid=start+( end-start)/2;
        }
    return -1;
}
int RSA(int arr[],int size ,int key)
{
   int pp=pivot(arr,size);
    if (key>=arr[pp] && key<=arr[size-1])
    {
    return binarySearch(arr,pp,size-1,key);
    }
    else{
       return binarySearch(arr,0,pp-1,key);
    }
    
    
}
int main()
{
    int even[5]={7,8,1,3,5};
    int odd[5]={1,3,5,7,9};

   int sea=RSA(even,5,4);
   if (sea==-1)
   {
    cout<<"key element is not present "<<endl;
   }
   else{
    cout<<"key element is present "<<endl;
   }
   
    
    
}

