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
      //destructor 
      ~node() {
              int value = this->data;
              
          cout<<"valued free is "<<value<<endl;
      }
};

void insertathead(node* &head ,int data  ){

     node* temp=new node(data);
     temp->next=head;
     head=temp;

}

void insertatpos(node* &head,int data,int pos){

if(pos==1){
  insertathead(head,data);
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
  temp->next = nodetoinsert;
}
void deleteNode(int pos , node* &head){
  
  if(pos==1)
  {
    node* temp=head;
    head = head->next;
    //deleting the node which is directed by temp
    temp->next = NULL;
    cout<<"emptoied is "<<temp->next<<endl;
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
    curr->next = NULL;
    delete curr;
   }

}

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
int main()
{
  
    node* node1 = new node(3);
    cout<<"data is "<<node1->data<<endl; //due to pointer -> is used .
    cout<<"next address  is "<<node1->next<<endl;
    
    node* head=node1;
    cout<<"data is "<<head->data<<endl;
    print(head);
    insertathead(head,1);
    insertatpos(head,2,2);
  
     print(head);
    deleteNode(1,head);
     print(head);
    deleteNode(2,head);
     print(head);
    deleteNode(3,head);
     print(head);
}