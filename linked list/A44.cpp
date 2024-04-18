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
     temp->next=head;
     head=temp;

}
void insertattail(node* &tail ,int data){
node* temp=new node(data);
tail->next=temp;
tail=temp;

}
void insertatpos(node* &head,int data,int pos){

  node* temp=head;
  int cnt=1;
  while(cnt<pos-1){
    temp=temp->next;
    cnt++;
  }

  node* nodetoinsert = new node(data);
  nodetoinsert ->next= temp->next;
  temp->next = nodetoinsert;
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
  
    node* node1 = new node(1);
    cout<<"data is "<<node1->data<<endl; //due to pointer -> is used .
    cout<<"next address  is "<<node1->next<<endl;
    
    node* head=node1;
    node* tail=node1;
    cout<<"data is "<<head->data<<endl;
    print(head);
    insertathead(head,11);
    print(head);
    insertattail(tail,12);
    insertattail(tail,13);
    insertatpos(head,10,3);
    print(head);
}