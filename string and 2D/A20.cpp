//insertig @40 at blank spaces.
#include<iostream>
#include<string>
using namespace std;
void replace(string &s)
{
  for (int i = 0; i<s.size(); i++)
    {
        
        char ch=s[i];  
        if (ch==' ')
        {
           s.replace(i,1,"@40");
         i+=2;
        }
   
}
}
int main(){
    string s;
    cout<<"enter the text: ";
    getline(cin,s);
    cout<<"your text is: "<<endl;
    replace(s);
    cout<<"upgraded text is "<<s<<endl;
}