//allocation of books.
#include<iostream>
#include<limits.h>
using namespace std;
bool possible(int arr[],int book ,int student,int mid )
{
    int studentCount=1;
    int pageSum=0;
    for (int i = 0; i < book; i++)
    {
        if (pageSum+arr[i]<=mid)
        {
            pageSum+=arr[i];
            
            
        }
        else{
            studentCount++;
            if (studentCount>student || arr[i]>mid)
            {
                return false;
            }
           
            pageSum=arr[i];    
        } 
}
return true;
}
int allocate(int arr[],int book ,int student)
{
    int s=0;
    int sum =0;
    for (int i = 0; i < book ; i++)
    {
        sum+=arr[i];
    }
    int e=sum;
    int mid=(s+e)/2;
    int ans=-1;
    while (s<=e)
    {
        if (possible(arr,book,student,mid))
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
    int array[4]={5,5,5,5};
    int m;
    cout<<"enter the number of students: ";
    cin>>m;
    cout<<endl;
    cout<<"allocated min pages are " <<allocate(array,4,m)<<endl;
}
   

