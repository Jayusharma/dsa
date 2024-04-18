#include<iostream>
#include<string>
using namespace std;
void reverse(string& s ,int i,int j){
    //base case
    if(i>j){
      return;
    }
    
    swap(s[i],s[j]);
    return reverse(s,i+1,j-1);


}
bool palindrome(string& s ,int i,int j){

    //base case
    if(i>j)
    return true;

    if(s[i]!=s[j])
    return false;

    return palindrome(s,i+1,j-1);
}
int main()
{
    string name="abbcceccbba";
    int i=0;
    int j=name.length()-1;
    /*reverse(name,i,j);
    cout << name; */
    if (palindrome(name,i,j))
    {
        cout<<"palindrome exists";
    }
    else{
        cout<<"no palindrome";
    }
    

}