// find whether the number is even or odd
 #include <iostream>
 #include<math.h>  
using namespace std;

bool isEven(int a){
        if(a&1){
                return 0;
        }
        return 1;
}
int main(){
        int num;
        cout<<"Enter the number:";
        cin>>num;
         
         if (isEven(num))
         {
                cout<<"Number is even "<<endl;
                exit(0);  // exit terminates the program

         }
         cout<<"Number is odd"<<endl;
}
 
