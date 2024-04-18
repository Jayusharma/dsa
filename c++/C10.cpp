//bitwise operators
#include<iostream>
using namespace std;
int main()
{
  int a,b;
  cout<<"enter the value of a"<<endl;
  cin>>a;
  cout<<"enter the value of b"<<endl;
  cin>>b;

  cout<<"a&b is "<< (a&b)<<endl;
  cout<<"a|b is "<< (a|b)<<endl;
  cout<<"~a is "<< (~a)<<endl;
  cout<<"a^b is "<< (a^b)<<endl;
  cout<<"a<<b is "<< (a<<1)<<endl;
  cout<<"a>>b is "<< (a>>1)<<endl;
  
  cout<<(++b)<<endl;
  cout<<(--b)<<endl;
  cout<<(b++)<<endl;
  cout<<(b--)<<endl;
  
  
        
       }
       