// create a power function 
 #include <iostream>
 #include<math.h>  
using namespace std;
 //Function signature 
int power()
{    //Function body 
        int a,b;
        cout<<"enter the value of a: ";
        cin>>a;
        cout<<"enter the value of b: ";
        cin>>b;
        int ans=1;
        for (int i = 1; i <=b; i++)
        {
            ans=ans*a;

        }
        return ans;
        
}
int main(){
        int answer=power();  //Function call 
        cout<<"power of a and b is "<<answer<<endl;
  return 0;
}
