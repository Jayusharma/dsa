//implementing recursion 
#include<iostream>
using namespace std;

int power(int n,int q){

    //base case
    if(q==0)
    return 1;

    return n*power(n,q-1);

}
int factorial(int n){
    //base case
    if(n==0)
     return 1;
    return n*factorial(n-1);
}
int main()
{
    int n;
    cout<<"enter the number:";
    cin>>n;
    int q;
    cout<<"enter the power: ";
    cin>>q;

    int ans =factorial(n);
    int newAns = power(n,q);
    cout<<ans<<endl;
    cout<<newAns<<endl;

}