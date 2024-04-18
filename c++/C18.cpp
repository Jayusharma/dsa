// simple calculator  
 #include <iostream>
 #include<math.h>  
using namespace std;
 
int main()
{
  int a,b;
  cout<<"Enter the value of a "<<endl;
  cin>>a;
  cout<<"Enter the value of b "<<endl;
  cin>>b;
  char op;
  cout<<"Enter the operation "<<endl;
  cin>>op;

  cout<<endl;

  switch (op)
  {
  case '+': cout<<"a+b = "<<a+b<<endl; 
    break;

  case '-': cout<<"a-b = "<<a-b<<endl; 
    break;

  case '*': cout<<"a*b = "<<a*b<<endl; 
    break;

  case '/': cout<<"a/b = "<<a/b<<endl; 
    break;
  
  
  }
  cout<<endl;
  return 0;
}
 