//merging two sorted array
#include<iostream>
using namespace std;
void merge(int arr1[],int n,int arr2[],int m,int arr3[])
{
    int i=0, j=0, k=0;
    while(i<n || j<m){
        if (arr1[i]<arr2[j])
        {
            arr3[k]=arr1[i];
            i++;
            k++;
        }
        else if (arr2[j]<arr1[i])
        {
            arr3[k]=arr2[j];
            j++;
            k++;
        }
        else{
            arr3[k]=arr1[i];
        }
        
        
    }

}

void print(int arr[],int n,int m)
{
    for (int i = 0; i < n+m; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

int main(){
    int arr1[]={1,4,5,6,8};
    int arr2[]={2,3,7,9};
    int n, m;
    cout<<"enter the size of array 1->";
    cin>>n;
    cout<<"enter the size of array 2->";
    cin>>m;
    int arr3[n+m];
    merge(arr1,n,arr2,m,arr3);
    cout<<"merged array is-> ";
    print(arr3,n,m);

}