//reversing single words in the string.
#include<iostream>
#include<limits.h>
#include<string>

using namespace std;

string scan(string s){
    string c=" ";
    string st=" ";
    for (int i = 0; i<s.size(); i++)
    {
    
        char ch=s[i];   
        if (ch==' ')
        {
            st.insert(st.begin(),' ');
            c+=st;
            st.clear();
           continue; 
        }
       else{
        st.insert(st.begin(),ch);
       } 
     

    }
    c.push_back(' ');
    c+=st;
    return c;
}

int main(){
  string s;
  cout<<"enter the text: ";
  getline(cin,s);
  cout<<"your text is-> "<<s<<endl;
  
  cout<<"updated text is->"<<scan(s)<<endl;
}