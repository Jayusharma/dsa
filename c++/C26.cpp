//find th pth term of fibonacci series 

 #include <iostream>
 #include<math.h>  
using namespace std;

int fib(int n)
{
    int a=0;
    int b=1;
    int sum;
    for (int i = 3; i <=n; i++)
    {
        sum=a+b;
        a=b;
        b=sum;
    }
    return sum;
    
}
int main()
{
    int p;
    cout<<"enter the value of p: ";
    cin>>p;
    cout<<"pth term of fibonacci series is "<<fib(p);
}