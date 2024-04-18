//finding occurences 
#include<iostream>
#include<limits.h>
#include<string>
using namespace std;

void occurences(string s){
     char most='a';
      int max=-1;
     for (int  i = 0; i <s.size(); i++)
     {
     
      
      bool duplicate=false;
      for (int j = 0; j <i; j++)
      { 
        if (s[i]==s[j])
        {
         duplicate=true;
         break;
         }
       }

       if (duplicate)
       {
        continue;
       }

       int count=1;
       
       for (int j = i+1; j <s.size(); j++)
       {
        if (s[i]==s[j])
        {
          count++;
         
        }
       }
         cout<<s[i]<<" occurs "<<count<<" times "<<endl;
      
      if(count>max){
        max=count;
        most=s[i];
      }
     }
     cout<<endl;
     cout<<"most frequent character  is "<<most<<endl;
     
}

int main(){
  string s;
  cout<<"enter the text: ";
  getline(cin,s);
  cout<<"your text is-> "<<s<<endl;
 occurences(s);
  
}