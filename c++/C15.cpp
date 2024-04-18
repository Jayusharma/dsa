// negative and positive decimal to binary 
 #include <iostream>
 #include<math.h>  // library for pow function
using namespace std;
 
int main()
{
  int n;
  cin>>n;
   
   int ans=0;
   int i=0;
   
   if (n<0)
   {int p=0;                             //Error Error Error Error Error
    int m=-n;                            //Error Error Error Error Error 
     while(p<=32)                        
   {
      int bit = m ^ 1;
       
      ans =(bit * pow(10,i) )+ ans;
   
   m = m >> 1;
   i++;
   p++;
   }
   
   ans = ans+1;
   cout<<"answer is "<<ans<<endl;
   }
   else
   {
     while(n!=0)
   {
      int bit = n & 1;
       
      ans =(bit * pow(10,i) )+ ans;
   
   n = n >> 1;
   i++;

   }
   cout<<"answer is "<<ans<<endl;
   }
   
}
 