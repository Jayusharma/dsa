 //search in a 2d sorted array both row wise and column wise .
 #include<iostream>
 #include<vector>
 using namespace std;
  bool searchMatrix(vector<vector<int>>& matrix, int target) {
       int row = matrix.size();
       int col = matrix[0].size();

       int start = 0;
       int end =  col - 1;
       
       while (start < row && end >= 0 ) {
          
           int element = matrix[start][end];

           if (element == target) {
               return true;
           }

           if (element < target) {
               start++;
           } else {
               end--;
           }
       }

       return false;
    } 
 int main()
 {
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
  cout<<"original matrix: "<<endl;
  for (int row = 0; row <n; row++)
 {
  for (int col = 0; col < m; col++)
  {
    cout<<arr[row][col]<<" ";
  }
 cout<<endl;
 
}
int target;
cout<<"enter the target: ";
cin>>target;
if(searchMatrix(arr,target))
{
    cout<<target<<" is present."<<endl;
}
else{
    cout<<target<<" is absent."<<endl;
}

}
 