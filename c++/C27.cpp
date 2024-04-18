// Implementing arrays 
 #include <iostream>
 #include<math.h>  
using namespace std;

int main (){
    // declaring 
    int number[9];

    //accessing an array 
    cout<<"value at 7 index is "<<number[7]<<endl; //garbage value is stored
     
    //initialising an array 
    int first[3]={2,4,5} ;
    cout<<"value at 2nd index is "<<first[2]<<endl;
   
      /*cout<<"value at 3rd index is"<<first[3]<<endl; 
    (it will give error for not having array of index 3 or it will 
    give a garbage value on its own .)*/

    int second[12]={1,4,5,3};
    
    //printing the complete array 
    int n=12;
    cout<<"printing the array "<<endl;
    for (int i = 0; i < n; i++){

    cout<< second[i]<<" ";
    }
   cout<<endl;
   //printing character array
   char two[5]={'a','f','e','r','s'};
   for (int i = 0; i < 5; i++)
   {
    cout<< two[i]<<" ";
   }
   
    


}