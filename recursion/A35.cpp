//find array is sorted using recursion.
#include<iostream>
using namespace std;
bool sort(int arr[],int size){
    //base case
    if(size==0 || size==1){
        return true;
    }
    //processing part
    if(arr[0]>arr[1])
    return false;

    //recursion relation
    else{
        int ans=sort(arr+1,size-1);
        return ans;
    }
    
     
    }
int main()
{
    int arr[6]={5,4,3,2,1,0};
    if (sort(arr,6))
    {
        cout<<"array is sorted";
    }
    else{
        cout<<"array is not sorted ";
    }
    
}