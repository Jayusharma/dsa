// Implementing arrays with functions
 #include <iostream>
 #include<math.h>  
using namespace std;
//calling function 
void makeArray(int arr[], int size)
{
  cout<<"printing array"<<endl;
  for (int i =0; i<size; i++)
  {
   cout<< arr[i] <<" ";
  }
  
}
int main (){
int first[9]={3,5,3};
  int size;
  cout<<"enter the size of array: "<<endl;
  cin>>size;
  makeArray(first,size);

  //printing the size of array 
  int firstSize=sizeof(first)/sizeof(int);
  cout<<"size of first is "<< firstSize <<endl;

   }