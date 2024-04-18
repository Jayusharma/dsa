//remove all occcurences of substring.
#include<iostream>
#include<string>
using namespace std;
string remove(string &s , string part)
{
   while (s.length()!=0 && s.find(part)<s.length())
   {
     s.erase(s.find(part),part.length());
   }
     return s;  

}
int main(){
    string s;
    cout<<"enter the text: ";
    getline(cin,s);
    string part;
    cout<<"enter the part: ";
    cin>>part;
    cout<<"unremoved text is:  "<<remove(s,part)<<endl;
}