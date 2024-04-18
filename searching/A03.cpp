//find the peak element of the mountain array.
#include<iostream>
#include<limits.h>
using namespace std;
//calling function
int peak(int arr[], int size )
{
    int start=0;
    int end=size-1;
    //finding mid in an first array.
    int mid=(start+end)/2;
    cout<<"mid 1 is "<<mid<<endl;
    cout<<endl;
    while (start<end)
    {
        if (arr[mid]<arr[mid+1])
        {
         start=mid+1;
            
        }
        
        else {
            end=mid; // we put mid because mid itself can be the value or ans we are looking for.
        }
        cout<<"start is "<<start<<endl;
        cout <<"end is " <<end <<endl;
         mid=(start+end)/2;
         cout<<"updated mid is "<<mid<<endl;
         cout<<"mid value is "<<arr[mid]<<endl;
         cout<<endl;
        }
        cout<<"last mid is  "<<mid<<endl;
    return arr[mid];
    
}
int main()
{
    int even[9]={0,2,3,4,6,7,5,3,1};
    int odd[5]={1,3,5,7,9};

    cout<<"peak value is "<<peak(even,9)<<endl;
    
}

