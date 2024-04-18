//wave printing
#include<iostream>
#include<vector>
using namespace std;
void wave(vector<vector<int>> arr ,int n,int m){
 cout<<"wave printing->"<<endl;
    for (int j = 0; j < m; j++)
    {
      if (j&1)
      {
        for (int i = n-1; i>=0 ; i--)
        {
            cout<<arr[i][j]<<" ";
        }
      }
        else{
            for (int i = 0; i<n ; i++)
        {
            cout<<arr[i][j]<<" ";
        }
        }
        
      }
     cout<<endl; 
    }
    

int main(){
    vector<vector<int>> arr;

int n ,m;
cout<<"enter the number of rows: ";
cin>>n;
cout<<"enter the number of columns: ";
cin>>m;

//resizing the vector 
arr.resize(n,vector<int>(m));

 //taking input row wise.
 cout<<"enter the elements: ";
 for (int row = 0; row <n; row++)
 {
  for (int col = 0; col <m; col++)

  {
    cin>>arr[row][col];

  }
  }
  cout<<"the elements are: "<<endl;
  for (int row = 0; row <n; row++)
 {
  for (int col = 0; col < m; col++)
  {
    cout<<arr[row][col]<<" ";
  }
 cout<<endl;
 
}
wave(arr,n,m);
}