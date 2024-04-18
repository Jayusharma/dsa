//find the sum of array using recusrion 
#include<iostream>
#include<vector>
using namespace std;


int sum(int v[],int n){
    //base case 
    if(n==0)
    return 0;

    return v[0]+sum(v+1,n-1);


}
int main()
{
    int v[100];
    int n;
    cout<<"enter the size:";
    cin>>n;
    cout<<"enter elements:";
for (int i=0;i<n;i++)
{
    cin>>v[i];
}
cout << "The elements of the vector are: ";
    for (int i = 0; i < n; ++i) {
        cout << v[i] << " ";
    }

int ans=sum(v,n);
cout<<endl;
cout<<"sum of elements are:";
cout << ans;

}