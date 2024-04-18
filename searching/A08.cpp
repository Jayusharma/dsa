//painter partition problem
#include<iostream>
#include<limits.h>
using namespace std;
bool possible(int arr[],int board,int painter,int mid )
{
    int painterCount=1;
    int time=0;
    for (int i = 0; i <board ; i++)
    {
        if (time+arr[i]<=mid)
        {
            time+=arr[i];
            
            
        }
        else{
            painterCount++;
            if (painterCount>painter || arr[i]>mid)
            {
                return false;
            }
           
            time=arr[i];    
        } 
}
return true;
}
int allocate(int arr[],int board,int painter)
{
    int s=0;
    int sum =0;
    for (int i = 0; i < board; i++)
    {
        sum+=arr[i];
    }
    int e=sum;
    int mid=(s+e)/2;
    int ans=-1;
    while (s<=e)
    {
        if (possible(arr,board,painter,mid))
        {
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=(s+e)/2;  
    }
    return ans;
}
int main(){
    int array[4]={20,30,40,50};
    
    int m;
    cout<<"enter the number of painters: ";
    cin>>m;
    int sum =0;
    for (int i = 0; i < 4 ; i++)
    {
        sum+=array[i];
    }
    cout<<endl;
    cout<<"min time for one painter is  " <<allocate(array,4,m)<<endl;
    cout<<"time for other painter is "<<sum-allocate(array,4,m)<<endl;
}
   

