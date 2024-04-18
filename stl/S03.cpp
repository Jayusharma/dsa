// standard template library deque 
#include <iostream>
#include <limits.h>
#include<deque>

using namespace std;

int main() {
  deque<int>d;    //no size is required as it is dynamic in nature .
     

     cout<<"size ->"<<d.size()<<endl;
     //inserting elements
     d.push_back(5);
     cout<<"size ->"<<d.size()<<endl;

     d.push_back(7);
     cout<<"size ->"<<d.size()<<endl;

     d.push_back(3);
     cout<<"size ->"<<d.size()<<endl;

     d.push_back(9);
     cout<<"size ->"<<d.size()<<endl;
     
     d.push_back(6);
     cout<<"size ->"<<d.size()<<endl;
      cout<<endl;
     //accessing 
     cout<<"elements are: ";
     for (int  i = 0; i <d.size() ; i++)
     {
      cout<<d[i]<<" ";
     }
     cout<<endl;
     cout<<"element at index 1 is "<<d.at(1)<<endl;
     cout<<"element at index 2 is "<<d.operator[](2)<<endl;
     cout<<"front is "<<d.front()<<endl;
     cout<<"End is "<<d.back()<<endl;
     cout<<"max element can store: "<<d.max_size()<<endl;
     cout<<endl;
     d.clear();
     cout<<"after remoding elements are: ";
     for (int  i = 0; i <d.size() ; i++)
     {
      cout<<d[i]<<" ";
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
      d.push_back(value);
     }
     cout<<endl;


     cout<<"new elements are: ";
     for (int  i = 0; i <d.size() ; i++)
     {
      cout<<d[i]<<" ";
     }
     cout<<endl;

    d.pop_back();
    d.insert(d.begin()+3,7);
    d.erase(d.begin()+1);
    d.insert(d.begin()+1,9);
    cout<<"new elements are: ";
     for (int  i = 0; i <d.size() ; i++)
     {
      cout<<d[i]<<" ";
     }
     cout<<endl;
     
     

     



   
}