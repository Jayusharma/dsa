//AP function
 #include <iostream>
 #include<math.h>  
using namespace std;

int AP(int a)
{
        int ans=(3*a)+7;
        return ans;
}
int main()
{
        int n;
        cout<<"enter the value of n: ";
        cin>>n;
        cout<<"nth term of an ap is "<<AP(n)<<endl;
}