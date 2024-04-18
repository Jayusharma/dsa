// find the number of specific notes 
 #include <iostream>
 #include<math.h>  
using namespace std;
 
int main()
{
  int n;
  cout<<"Enter the amount: "<<endl;
  cin>>n;

  int a=1;
  {

  switch (a)
  {
    int note500,note50,note20,note1;
  case 1: if(n>=500){
          note500=n/500;
          cout<<"Number of 500 rupee note are "<<note500<<endl;
          n-=note500*500;
          }
          
  case 2: if(n>=50){
          note50=n/50;
          cout<<"Number of 50 rupee note are "<<note50<<endl;
          n-=note50*50;
          }
          
  case 3: if(n>=20){
          note20=n/20;
          cout<<"Number of 20 rupee note are "<<note20<<endl;
          n-=note20*20;
          }
          
  case 4: if(n>=1){
          note1=n/1;
          cout<<"Number of 1 rupee note are "<<note1;
          n-=note1*1;
          }
   }
  cout<<endl;
  return 0;
}
}