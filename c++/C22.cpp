// find ncr which is n!/r!*(n-r)!
 #include <iostream>
 #include<math.h>  
using namespace std;

int factorial(int p){
        int ans=1;
        for (int i = 1; i <= p; i++)
        {
                ans=ans*i;
        }
       return ans; 
}
int ncr(int n,int r)
{
        
        int answer=factorial(n)/(factorial(r)*(factorial(n-r)));
        return answer;
        }
int main (){
        int a,b;
        cout<<"enter the value of a: ";
        cin>>a;
        cout<<"enter the value of b: ";
        cin>>b;
        cout<<"ncr is "<<ncr(a,b) <<endl;
}