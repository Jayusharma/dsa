// standard template library queue
#include <iostream>
#include <limits.h>
#include<queue>

using namespace std;

int main() {
  queue<int>q;    //no size is required as it is dynamic in nature .
     
    q.push(1);
    q.push(2);
    q.push(3);
  

    cout<<"front element is "<<q.front()<<endl;
    q.pop();
    cout<<"front element is "<<q.front()<<endl;
    cout<<"size is "<<q.size()<<endl;

     

     



   
}