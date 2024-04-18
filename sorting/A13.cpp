//reveresing an array after an given element or index.
#include<iostream>
#include<vector>
using namespace std;
vector<int> reverse(vector<int> v){
    int key;
    cout<<"enter the element to reverese:";
    cin>>key;
    int start=key+1;
    int end=v.size()-1;
    while(start<end){
        swap(v[start],v[end]);
        start++;
        end--;
    }
   return v;
}

void print(vector<int>v)
{
    for (int i :v)
    {
       cout<<i<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int>v;
    int n;
    cout<<"enter the size-> ";
    cin>>n;
    cout<<endl;
    cout<<"enter the elements:"<<endl;
    for (int i = 0; i <n; i++)
     {
      int value;
      cin>>value;
      v.push_back(value);
     }
    cout<<"array ->";
    print(v);
  v= reverse(v);
   cout << "Reversed Array: ";
  print(v);
}