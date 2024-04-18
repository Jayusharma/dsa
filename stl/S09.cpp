// mtandard template library map
#include <iostream>
#include <limits.h>
#include<map>

using namespace std;

int main() {
  
  map<int,string>m;

m[1]="jay";
m[2]="ditya";
m[3]="jay";

m.insert( {5,"varun"});

for(auto i:m){
  cout<<i.first<<" "<<i.second<<endl;
}
cout<<endl;

}
  