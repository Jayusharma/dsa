//find the first occurence and last occurence.
#include<iostream>
#include<limits.h>
using namespace std;
//calling function
int firstOccurence(int arr[], int size , int key)
{
    int start=0;
    int end=size-1;
    //finding mid in an first array.
    int mid=start+( end-start)/2;
    int ans=-1;
    while (start<=end)
    {
        if (arr[mid]==key)
        {
            ans=mid;
            end=mid-1;
        }
        
        //choosing parts 
        //for the right part
        else if (key>arr[mid])
        {
            start=mid+1;
        }
        //for left part
        else{
            end=mid-1;
        }
         mid=start+( end-start)/2;
        }
    return ans;
}
int lastOccurence(int arr[], int size , int key)
{
    int start=0;
    int end=size-1;
    //finding mid in an first array.
    int mid=start+(end-start)/2;
    int newAns=-1;
    while (start<=end)
    {
        if (arr[mid]==key)
        {
        
            newAns=mid;
          start=mid+1;
        }
        
        //choosing parts 
        //for the right part
        else if (key>arr[mid])
        {
            start=mid+1;
        }
        //for left part
        else{
            end=mid-1;
        }
         mid=start+(end-start)/2;
        }
    return newAns;
}

int main()
{
    int even[7]={0,1,2,2,2,3,3};
    int odd[5]={1,2,3,3,5};

    cout<<"first occurence is "<<firstOccurence(odd,5,3)<<endl;
    cout<<"lastoccurence is "<<lastOccurence(odd,5,3)<<endl;
}


