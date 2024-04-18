#include<iostream>
using namespace std;
class node{
      
      public:
      int data;
      node* next;   

      node(int data){  
        this->data=data;
        this->next=NULL;
      
      }  
      //destructor 
      ~node() {
              int value = this->data;
              
          cout<<"valued free is "<<value<<endl;
      }
};

class stack{
   //properties 
     public:
     node* top;
     

     //constructor 
      stack(){
         top=NULL;
        
      }
        //functions

       void push(int element){
           //checking for empty space
           node* temp = new node(element);
           temp->next=top;
           top=temp;
           
       }

      
        void pop(){
            if(!isEmpty()){
                node* temp= top;
                top=top->next;
                delete temp;
            }
            else{
                cout<<"under flow: stack is empty!"<<endl;
            }
       }
       
        void peek(){
            if (!isEmpty())
            {
              cout<<"top value is "<< top->data<<endl;
            }
            else{
                cout<<"stack is empty";
            }
          }

       bool isEmpty() {
    return top == NULL;
}

};
 
int main()
{
    stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.peek();
    s.pop();
   s.peek();
}