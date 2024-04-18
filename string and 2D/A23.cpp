//remove adjacent and same characters.
#include<iostream>
#include<string>
using namespace std;
void print(int c[],int n){
    cout<<"c is-> ";
    for (int i = 0; i <n; i++)
    {
        cout<<c[i]<<" ";
    }
}

string remove(string &s)
{
  while(true){
   int count[s.size()]={0};
  for (int i = 0; i < s.size(); i++)
  {
    if (s[i]==s[i+1])
    {
      count[i]++;
      count[i+1]++;
      i++;
    }
  }
  bool adjacent=false;

  for (int j = s.size()-1; j >=0;  j--)
  {
    if (count[j]==1)
    {
      s.erase(s.begin()+j);
      adjacent=true;
    }
    
  }
 if(!adjacent){
  break;
 }
   
}
return s;
}

int main(){
    string s;
   cout<<"enter the text: ";
   getline(cin,s);
    cout<<"your text is: "<<endl;
    
    cout<<"upgraded text is "<<remove(s)<<endl;
}