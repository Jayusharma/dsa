// standard template library stack
#include<iostream>
#include <limits.h>
#include<stack>

using namespace std;

int main() {
  stack<string>s;    //no size is required as it is dynamic in nature .
     
    s.push("sharma");
     s.push("ditya");
    s.push("jay");
  

    cout<<"top element is "<<s.top()<<endl;
    s.pop();
    cout<<"top element is "<<s.top()<<endl;
    cout<<"size is "<<s.size()<<endl;

     

     



   
}