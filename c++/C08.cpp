//celsius to farhniet table.
#include<iostream>
using namespace std;
int main()
{
    
   int n;
    cin>>n;
    cout<<"celsius"<<"   "<<"farhniet"<<endl;
    float fa=0;
    int i=0;
    while(i<n)
    {
        fa=(9.0/5.0)*i+32.0;
        i=i+1;
        cout<<i<<"         "<<fa<<endl;
    }

}