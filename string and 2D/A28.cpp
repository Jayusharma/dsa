 // search in a 2d array sorted row wise .
 #include<iostream>
 #include<vector>
 using namespace std;
  bool searchMatrix(vector<vector<int>>& matrix, int target) {
       int row = matrix.size();
       int col = matrix[0].size();

       int start = 0;
       int end = row * col - 1;
       
       while (start <= end) {
           int mid = start + (end - start) / 2;
           int element = matrix[mid / col][mid % col];

           if (element == target) {
               return true;
           }

           if (element < target) {
               start = mid + 1;
           } else {
               end = mid - 1;
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
 