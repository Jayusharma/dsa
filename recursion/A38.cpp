#include<iostream>
using namespace std;

void print(int arr[],int s, int e){
    for (int i = s; i < e; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
bool binary(int* arr,int s,int e ,int k){

print (arr,s,e);
    //base case
    //element not found
    if(s>e)
    return false;

    int mid=s+(e-s)/2;

    //element found
    if(arr[mid]==k)
    return true;

    if(arr[mid]<k){
        return binary(arr,mid+1,e,k);
    }
    else{
        return binary(arr,s,mid-1,k);
    }
}
int main()
{
    int v[6]={2,4,6,8,10,12};
    int n=6;
    int k=10;
    int s=0;
    int e=n-1;

    if(binary(v,s,e,k)){
        cout<<"element is present ";
    }
    else{
        cout<<"element is absent ";
    }
}