#include<iostream>
using namespace std;
class stack{
   //properties 
     public:
     int *arr;
     int top;
     int size;

     //constructor 
      stack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;
      }
        //functions

       void push(int element){
           //checking for empty space
           if(size-top>1){
            top++;
            arr[top]=element;
           
           }
           else{
            cout<<"stack overflow"<<endl;
           }
       }

      
        void pop(){
            if(top>=0){
                top--;
            }
            else{
                cout<<"under flow"<<endl;
            }
       }
       
        int peek(){
            if (top>=0 && top<size)
            {
              return arr[top];
            }
            else{
                return 0;
            }
          }

       int isEmpty(){
        if(top==-1){
            return 1;
        }
        else{
            return 0;
        }

       }

 
};
void top(stack s){
    if (s.peek())
    {
        cout<<"top element is "<<s.peek();
    }
    else
    {
       cout<<"stack is empty";
    }
    cout<<endl;
}
int main()
{
    stack s(5);

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    
    top(s);
    cout<<"stack is-> ";
    while(!s.isEmpty())
    {
    cout<<s.peek()<<" ";
    s.pop();
    }

}