//find total number of set bits of two numbers 

 #include <iostream>
 #include<math.h>  
using namespace std;

int set(int r)
{
    int p=0;
    while (r!=0)
    {
        int bit=r&1;
        if (bit==1)
        {
           p++;
        }
         r=r>>1;
    
    }
    return p;
}
int output(int m,int n)
{
    int ans=set(m)+set(n);
    return ans;
}
int main(){
    int a,b;
    cout<<"enter the value of a: ";
    cin>>a;
    cout<<"enter the value of b: ";
    cin>>b;
    cout <<"sum of set bits of a and b is "<<output(a,b)<<endl;


}