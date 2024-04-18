//implementing double linked list.
#include<iostream>
using namespace std;
class node{
      
      public:
      int data;
      node* prev;
      node* next;   

      node(int data){  
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
      
      }  
      //destructor 
      ~node() {
              int value = this->data;
              
          cout<<"valued free is "<<value<<endl;
      }
};



void print(node* &head){

cout<<"linked list is -> ";
  node* temp=head;
  while (temp!=NULL)
  {
    cout<<temp->data<<" ";
    temp=temp->next;

  }
  cout<<endl;

}
void insertAtHead(node* &head ,int data){
    //empty list
    if(head==NULL){
     node*temp=new node(data);
     head=temp;
    }
    else{
    node* temp=new node(data);
    temp->next=head;
    head->prev=temp;
    head=temp;
    }
}
void insertatpos(node* &head,int data,int pos){

if(pos==1){
  insertAtHead(head,data);
  return;
}
 node* temp=head;
  int cnt=1;
  while(cnt<pos-1){
    temp=temp->next;
    cnt++;
  }

  node* nodetoinsert = new node(data);
  nodetoinsert ->next= temp->next;
  nodetoinsert ->prev= temp;
  temp->next = nodetoinsert;
  temp->next->prev = nodetoinsert;

}
void deleteNode(int pos , node* &head){
  
  if(pos==1)
  {
    node* temp=head;
    temp->next->prev=NULL;
    head = temp->next;
    //deleting the node which is directed by temp
    temp->next = NULL;
    cout<<"emptied is "<<temp->next<<endl;
    delete temp;
  }
  else{

    //deleting any middle or last node 
    node* curr = head;
    node* prev = NULL;

    int cnt = 1;
    while(cnt < pos){
      prev = curr;
      curr = curr -> next;
      cnt++;
    }
    prev->next = curr->next;
    curr->next->prev = prev;
    curr->prev=NULL;
    curr->next=NULL;
    delete curr;
   }

}
int getLength(node* head){
  int cnt=0;
  node* temp=head;
  while(temp != NULL ) {
    temp=temp->next;
    cnt++;
  }
  return cnt;
}
int main()
{
  
    node* node1 = new node(3);
    node* head=node1;
    print(head);
    cout<<"length is "<<getLength(head)<<endl ;
    insertAtHead(head,1);
    print(head);
    insertatpos(head,2,2);
    print(head);
    insertatpos(head,4,4);
    print(head);
    deleteNode(3,head);
    print(head);
    deleteNode(1,head);
    print(head);
}