//binary search
#include<iostream>
#include<limits.h>
using namespace std;
//calling function
int binarySearch(int arr[], int size , int key)
{
    int start=0;
    int end=size-1;
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
int main()
{
    int even[6]={2,4,6,8,10,12};
    int odd[5]={1,3,5,7,9};

    cout<<"index of 4 is "<<binarySearch(even,6,4)<<endl;
    cout<<"index of 9 is "<<binarySearch(odd,5,9)<<endl;
}


