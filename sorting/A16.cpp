//check if array is sorted and rotated.
#include<iostream>
#include<vector>
using namespace std;

int check(vector<int>& v){
    int count=0;
    for (int i = 1; i <v.size(); i++)
    {
        if(v[i-1]>v[i])
        count++;
    }
        if(v[v.size()-1]>v[0]){
    count++;
    
    }

    if (count<=1)
    {
        cout<<"array is rotated and sorted"<<endl;
    }
    else{
        cout<<"array is not rotated and sorted"<<endl;
    }
    
}
   

void print(vector<int> v) {
    for (int i : v) {
       cout << i << " ";
    }
    cout << endl;
}

int main() {
    vector<int> v = {1,2,3,4,5,6};
    vector<int> d = {4,5, 1, 2, 3,};
    vector<int> e = {5,4, 1, 2, 3,};
   
   int count;
     check(v);
     check(d);
     check(e);
     

}
