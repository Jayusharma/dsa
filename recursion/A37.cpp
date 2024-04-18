//find if the element is present using linear search in recursion.
#include<iostream>
#include<vector>
using namespace std;


int present(int* v,int n,int k){
    //base case 
    if(n==0)
    return false;

    if(v[0]==k)
    return true;

    return present(v+1,n-1,k);


}
int main()
{
    int v[5]={3,2,6,4,7};
    int n=5;
    int k=9;

cout<<"one is"<<*v<<endl;
cout<<"two is"<<*(v+1)<<endl;
    if(present(v,n,k)){
        cout<<"element is present";
    }
    else{
        cout<<"element not found";
        }
    


}