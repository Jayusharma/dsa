// standard template library maxueue
#include <iostream>
#include <limits.h>
#include<queue>

using namespace std;

int main() {
  //gives maximum element (max heap)
  priority_queue<int>max;    //no size is remaxuired as it is dynamic in nature .
     
     //for minimum element (min heap)
     priority_queue< int,vector<int>,greater<int> >mini;
    max.push(2);
    max.push(5);
    max.push(3);
    

    cout<<"size is "<<max.size()<<endl;
    int n=max.size();
for (int i = 0; i <n; i++)
{
  cout<<max.top()<<" ";
  max.pop();
}
cout<<endl;
mini.push(5);
mini.push(3);
mini.push(7);
mini.push(2);
mini.push(0);

 cout<<"size is "<<mini.size()<<endl;
    int m=mini.size();
for (int i = 0; i <m; i++)
{
  cout<<mini.top()<<" ";
  mini.pop();
}
     

     



   
}