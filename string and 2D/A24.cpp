//compress string.
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

string compress(string &s)
{
  int i=0;
  
  string temp=" ";
  while (i<s.length())
  {
    int count=1;
    
    while (i+1<s.length() && s[i]==s[i+1])
    {
       count++;
        i++;
      }
    
    temp+=s[i];
    temp+=to_string(count);
    i++;
    }
  
return temp;
}



int main(){
    string s;
   cout<<"enter the text: ";
   getline(cin,s);
    cout<<"your text is: "<<endl;
    
    cout<<"upgraded text is "<<compress(s)<<endl;
}