// check whether the number is prime or not
 #include <iostream>
 #include<math.h>  
using namespace std;

bool isPrime(int n){
         
     for (int i = 2; i <n; i++)
     {
        if (n%i==0)
        {
                return 0;
        }

     }
    return 1;     
}
int main(){
        int a;
        cout<<"enter the value of a: ";
        cin>>a;
        if (isPrime(a))
        {
                cout<<a<<" is a prime number"<<endl;
         exit(0);
        }
        cout<<a<<" is not a prime number "<<endl;
}