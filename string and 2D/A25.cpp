//implementing 2-D arrays.
#include<iostream>
using namespace std;
bool isPresent(int arr[][3],int n ,int m,int t){
  for (int i = 0; i <n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      if (arr[i][j]==t)
      {
        return 1;
      }
      
    }
    
  }
  return 0;
  
}
void sum(int arr[][3],int n ,int m){
  int row=1;
  int max=0;
  for (int i = 0; i <n; i++)
  {
    int sum=0;
    for (int j = 0; j < m; j++)
    {
     sum+=arr[i][j];
      
    }
    cout<<"sum of row"<<row++<<" is "<<sum<<endl;
    if (sum>max)
    {
      max=i+1;
    }
    
  }
cout<<"row havin maximum sum is "<<max<<endl;  
}

int main(){
  int arr[3][3];

 //taking input row wise.
 cout<<"enter the elements: ";
 for (int row = 0; row < 3; row++)
 {
  for (int col = 0; col < 3; col++)
  {
    cin>>arr[row][col];
  }
  }
 
/*
//taking input as column wise.
cout<<"enter the elements: ";
for (int col = 0; col < 4; col++){

 for (int row = 0; row < 3; row++)
  {
    cin>>arr[row][col];
  }
  }
  */
  cout<<"the elements are: "<<endl;
  for (int row = 0; row < 3; row++)
 {
  for (int col = 0; col < 3; col++)
  {
    cout<<arr[row][col]<<" ";
  }
 cout<<endl;
}

//searching an element.
int target;
cout<<"enter the target: ";
cin>>target;
if (isPresent(arr,3,3,target))
{
  cout<<"target is present";
}
else{
  cout<<"target is absent";
}
cout<<endl;
sum(arr,3,3);


}
