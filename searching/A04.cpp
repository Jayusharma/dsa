//find the pivot element in an array.
#include<iostream>
#include<limits.h>
using namespace std;
//calling function
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
        cout<<"last mid is  "<<mid<<endl;
    return arr[mid];
    
}
int main()
{
    int even[9]={4,5,6,7,8,9,1,2,3};
    int odd[5]={1,3,5,7,9};

    cout<<"pivot value is "<<pivot(even,9)<<endl;
    
}

