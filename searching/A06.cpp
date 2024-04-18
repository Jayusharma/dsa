//find the under root of the number in integer form
#include<iostream>
#include<limits.h>
using namespace std;

int root(int n )
{
   int start=0;
   int end=n;
   int mid=(start+end)/2;
   int ans=-1;
   cout<<endl;
   while(start<=end){
    int square=mid*mid;
    if(square>n)
    {
        end=mid-1;
    }
     else if(square<n)
    { 
        ans=mid;
        start=mid+1;
    }
    else
    { 
        return mid;
       
    }
    mid=(start+end)/2;
    
    }
    return ans;
}
double decimal(int n,int point , int integer)
{
    double factor=1;
    double ans=root(n);
    for (int i = 0; i < point; i++)
    {
        factor =factor/10;
       for (double j = ans; j*j < n ; j=j+factor)
       {
        ans=j;
       }
       
    }
    return ans;
    
}
int main()
{
    int n;
    cout<<"enter the number: ";
    cin>>n;

    cout<<"underoot of "<<n<<" is "<<decimal(n,3,root(n));
}

   

