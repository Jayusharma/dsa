// standard template library list 
#include <iostream>
#include <limits.h>
#include<list>

using namespace std;

int main() {
  list<int>l;    //no size is required as it is dynamic in nature .
     

     cout<<"size ->"<<l.size()<<endl;
     //inserting elements
     l.push_back(5);
     cout<<"size ->"<<l.size()<<endl;

     l.push_back(7);
     cout<<"size ->"<<l.size()<<endl;

     l.push_back(3);
     cout<<"size ->"<<l.size()<<endl;

     l.push_back(9);
     cout<<"size ->"<<l.size()<<endl;
     
     l.push_back(6);
     cout<<"size ->"<<l.size()<<endl;
      cout<<endl;
     //accessing 
     cout<<"elements are: ";
     for (int i:l){
      cout<<i<<" ";
     }

     cout<<endl;
    
     cout<<"End is "<<l.back()<<endl;
     cout<<"front is "<<l.front()<<endl;
     cout<<"max element can store: "<<l.max_size()<<endl;
     cout<<endl;
     l.clear();
     cout<<"after removing elements are: ";
    for (int i:l){
      cout<<i<<" ";
     }
     cout<<endl;

     //inserting new elements
     int n;
    cout << "Enter the number of elements: ";
    cin >> n; 
     cout<<"enter the new elements: ";
     for (int i = 0; i <n; i++)
     {
      int value;
      cin>>value;
      l.push_back(value);
     }
     cout<<endl;


     cout<<"new elements are: ";
     for (int i:l){
      cout<<i<<" ";
     }
     cout<<endl;

    l.pop_back();
    l.erase(l.begin());
    l.insert(l.begin(),9);
    l.insert(l.begin(),2,7);

    cout<<"new elements are: ";
     for (int i:l){
      cout<<i<<" ";
     }
     cout<<endl;
     
     

     



   
}