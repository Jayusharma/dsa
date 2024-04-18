//print fibonacci series using recursion
#include<iostream>
using namespace std;

int fibonnaci(int n){
    if(n==0)
    return 0;
    if(n==1)
    return 1;
    
    int ans=fibonnaci(n-1)+fibonnaci(n-2);
    
    return ans;


        

}
int main()
{
    int n;
    cout<<"enter the number:";
    cin>>n;
    cout<<fibonnaci(n);
}