// standard template library vector 
#include <iostream>
#include <limits.h>
#include<vector>

using namespace std;

int main() {
  vector<int>v;    //no size is required as it is dynamic in nature .
     
   
     cout<<"capacity -> "<<v.capacity()<<endl;
     cout<<"size ->"<<v.size()<<endl;
     //inserting elements
     v.push_back(5);
     cout<<"capacity -> "<<v.capacity()<<endl;
     cout<<"size ->"<<v.size()<<endl;

     v.push_back(7);
     cout<<"capacity -> "<<v.capacity()<<endl;
     cout<<"size ->"<<v.size()<<endl;

     v.push_back(3);
     cout<<"capacity -> "<<v.capacity()<<endl;
     cout<<"size ->"<<v.size()<<endl;

     v.push_back(9);
     cout<<"capacity -> "<<v.capacity()<<endl;
     cout<<"size ->"<<v.size()<<endl;
     
     v.push_back(6);
     cout<<"capacity -> "<<v.capacity()<<endl;
     cout<<"size ->"<<v.size()<<endl;
      cout<<endl;
     //accessing 
     cout<<"elements are: ";
     for (int  i = 0; i <v.size() ; i++)
     {
      cout<<v[i]<<" ";
     }
     cout<<endl;
     cout<<"element at index 1 is "<<v.at(1)<<endl;
     cout<<"element at index 2 is "<<v.operator[](2)<<endl;
     cout<<"front is "<<v.front()<<endl;
     cout<<"End is "<<v.back()<<endl;
     cout<<"max element can store: "<<v.max_size()<<endl;
     v.shrink_to_fit();
     cout<<"capacity -> "<<v.capacity()<<endl;
     cout<<endl;

     v.clear();
     cout<<"after removing elements are: ";
     for (int  i = 0; i <v.size() ; i++)
     {
      cout<<v[i]<<" ";
     }
     cout<<endl;

     //inserting new elements 
     cout<<"enter the new elements: ";
     for (int i = 0; i < v.capacity(); i++)
     {
      int value;
      cin>>value;
      v.push_back(value);
     }
     cout<<endl;

     cout<<"new elements are: ";
     for (int  i = 0; i <v.size() ; i++)
     {
      cout<<v[i]<<" ";
     }
     cout<<endl;

    v.pop_back();
    v.insert(v.begin()+3,7);
    v.erase(v.begin()+1);
    v.insert(v.begin()+1,9);
    cout<<"new elements are: ";
     for (int  i = 0; i <v.size() ; i++)
     {
      cout<<v[i]<<" ";
     }
     cout<<endl;
     
     

     



   
}