//find whether the number is prime or not.
#include<iostream>
using namespace std;
int main()
{
    
   int n;
    cin>>n;
    int i=2;
    int p=0;
    while(i<n)
     {
       if (n%i==0)
       {
        p=1;
        break;
       }
       i=i+1;
       }
       if (p==0)
       {
        cout<<n<<" is a prime number"<<endl;
       }
       else{
           cout <<n <<" is a not prime number"<<endl;
       }
       
        
       }
       