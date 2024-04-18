//say digit
#include<iostream>
using namespace std;
void say(int n,string arr[]){
   
   //base case
   if(n==0)
   return;

   //processing
   int digit=n%10;
   n=n/10;

   say(n,arr);

   cout<<arr[digit]<<" ";
}
int main()
{
    string arr[10]={"zero","one","Two","Three","Four"
                ,"Five","Six","Seven","eight","nine"};

    int n;
    cin>>n;

    say(n,arr);            
}