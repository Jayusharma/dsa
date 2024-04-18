//implementing character array and strings.
#include<iostream>
#include<limits.h>

using namespace std;
char toLowerCase(char ch){
    if (ch>='a'&& ch<='z')
    {
        return ch;
    }
    else{
        char temp=ch-'A'+'a';
        return temp;
    }
}
int getLength(char name[]){
    int count=0;
    for (int i = 0; name[i] !='\0'; i++)
    {
        count++;
    }
    return count;
}
void reverse(char name[]){
    int s=0;
    int n=getLength(name);
    int e=n-1;
    while (s<e)
    {
        swap(name[s],name[e]);
        s++;
        e--;
    }
}
    bool palindrome(char name[]){
        int s=0;
        int n=getLength(name);
        int e=n-1;
        
        while (s<e)
        {
            while(s<e && !(toLowerCase(name[s] )>='a' && toLowerCase(name[s] )<='z')){
                s++;
            }
            while(s<e && !(toLowerCase(name[e] )>='a' && toLowerCase(name[e] )<='z')){
                e--;
            }
            if (toLowerCase(name[s] ) != toLowerCase(name[e]))
            {
                return 0;
            }
            else{
                s++;
                e--;
            }
         }
        return 1;
    }
int main(){
    char name[20];
    cout<<"enter your name->";
    cin>>name;
    cout<<"your name is->"<<name<<endl;
    cout<<"Lenght of an string is "<<getLength(name)<<endl;
    reverse(name);
    cout<<" reveresed string  is->"<<name<<endl;
    name[0]='\0';
    cout<<"updated string is->"<<name<<endl;
    cout<<"renter the string->";
    cin>>name;
    if (palindrome(name))
    {
        cout<<"string is palindrome."<<endl;
    }
    else{
        cout<<"string is not palindrome"<<endl;
    }

}