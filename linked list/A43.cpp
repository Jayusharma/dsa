//implementing linked list.
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
};

void insertathead(node* &head ,int data  ){

     node* temp=new node(data);
     cout<<"temp data is "<<temp->data<<endl;
     cout<<"temp next  is "<<temp->next<<endl;
     temp->next=head;
          cout<<"temp next  is "<<temp->next<<endl;

     head=temp;

}
void print(node* &head){

  node* temp=head;
  while (temp!=NULL)
  {
    cout<<temp->data<<" ";
    temp=temp->next;

  }
  cout<<endl;

}
int main()
{
    node node2(2);
    node* node1 = new node(1);
    cout<<"data is "<<node1->data<<endl; //due to pointer -> is used .
    cout<<"next address  is "<<node1->next<<endl;
    cout<<"data is "<<node2.data<<endl; //direct object can be accessed by [.]
    cout<<"next address is "<<node2.next<<endl;
    cout<<"node2 address is "<<&node2<<endl;
    cout<<"node1 address is "<<&node1<<endl;
    cout<<"node1 address is "<<node1<<endl;

    node* head=node1;
    cout<<"node1 is "<<node1<<endl;
    cout<<"valur is "<<&node1<<endl;
    cout<<"head  is "<<head <<endl;
    cout<<"head add is "<<&head <<endl;
    cout<<"data is "<<head->data<<endl;
    print(head);
    insertathead(head,11);
    cout<<"head  is "<<head <<endl;
    print(head);
}