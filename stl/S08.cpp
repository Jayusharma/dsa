// standard template library set
#include <iostream>
#include <limits.h>
#include<set>

using namespace std;

int main() {
  
  set<int>s;

  s.insert(3);
  s.insert(3);
  s.insert(0);
  s.insert(0);
  s.insert(5);
  s.insert(5);
  s.insert(7);
  s.insert(3);
  s.insert(1);

for (int i:s)
{
  cout<<i<<" ";
}
cout<<endl;
//initailising iterator 
set<int>::iterator it =s.begin();
it++;
s.erase(it);

for (int i:s)
{
  cout<<i<<" ";
}
cout<<endl;
cout<<"5 is present or not: "<<s.count(5)<<endl;
cout<<"9 is present or not: "<<s.count(9)<<endl;
   
   set<int>::iterator itr=s.find(7);
   cout<<"valur present at itr: "<<distance(s.begin(),itr);
   }
  