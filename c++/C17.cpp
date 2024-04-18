// switch statement  
 #include <iostream>
 #include<math.h>  
using namespace std;
 
int main()
{
  int ch='1';
  int num=1;

  cout<<endl;
  switch (ch)
  {
  case 1: cout<<"first"<<endl;
   break;

   case '1':switch (num)
   {
   case 1:cout<<"value of num is "<<num<<endl;
      break;
      }
      break;
  
  default:cout<<"default value"<<endl;
  }
  cout<<endl;
}
 