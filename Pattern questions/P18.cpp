#include<iostream>
using namespace std;
 int main()
 {
    int n;
    cin>>n;
    
    int row=1;
    while (row<=n)
    {
      int space=1;
      while (space<=n-row)
      {
        cout<<" ";
        space++;
      }
        int col=1;
        while (col<=row)
        {
          cout<<col;
          col++;   
       }
       int j=1;
        int c=row-1;
        while (j<row)
        {
          cout<<c;
          c--;
          j++; 
       }
       cout<<endl;
       row++;
       
        
     }
 }
    
     
 