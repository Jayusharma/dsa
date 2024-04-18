// standard template library array
#include <iostream>
#include <limits.h>
#include<array>

using namespace std;

int main() {
  //raw array 
    int even[5] = {1, 2, 8, 4, 0};
    //stl array 
     array<int,4>a={3,8,5,9};
     //size of an array
     int size=a.size();
     //accessing an array 
     cout<<"array elements are: "<<endl;
      for (int i = 0; i <size; i++)
     {
      cout<<a[i]<< " ";
     }
     cout<<endl;
     cout<<"element at 1 index is "<<a.at(1)<<endl;
     cout<<"element at 2 index is "<<a[2]<<endl;
     cout<<"first element is "<<a.front()<<endl;
     cout<<"last element is "<<a.back()<<endl;
     cout<<"empty or not : "<<a.empty()<<endl;
     
     //filling new element
     a.fill(7);
     //after filling 
     cout<<"array updated elements are: "<<endl;
     for (int i = 0; i <size; i++)
     {
      cout<<a[i]<<" ";
     }

     
     

     
   
}