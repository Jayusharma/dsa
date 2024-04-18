#include<iostream>
using namespace std;
 int main()
 {
    int n;
    cin>>n;
    
    int a=1;
    while (a<=n)
    {
        int b=1;
        while (b<=n-a+1)
        {
            cout<<b;
            b++;
        }
        int c=1;
        while (c<=a-1)
        {
          cout<<"*";
          c++;
          }
          int d=1;
          while (d<=a-1)
          {
            cout<<"*";
            d++;
          }
          int j=1;
        int k=n-a+1;
        while (j<=n-a+1)
        {
            cout<<k;
            j++;
            k--;
            
            
        }
         
        cout<<endl;
        a++;
        
     
 }
 }
    
     
 