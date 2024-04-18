//reversing the linked list 
#include<iostream>
using namespace std;
class node {
    public:
    int data;
    node* next;

    //constrcutor
    node(int d) {
        this->data = d;
        this->next = NULL;
    }

    ~node() {
        int value = this->data;
        if(this->next != NULL) {
            delete next;
            next = NULL;
        }
        cout << " memory is free for node with data " << value << endl;
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
//approach 1
node* Reverse1(node* &head){
//for empty or single node list.
if(head==NULL || head->next==NULL){
    return head;
}
  node* prev=NULL;
  node* curr=head;
  while(curr!=NULL){
    node* forward=curr->next;
    curr->next=prev;
    prev=curr;
    curr=forward;
  }
  return prev;
}
//approach 2 
void reverse(node* &head ,node* curr,node* prev){
  //base case
  if(curr == NULL){
    head = prev;
    return;
  }
  //recursive relation
  node* forward=curr->next; 
  reverse(head , forward , curr);
  //processing part or unwinding part 
  curr->next=prev;
}
node* Reverse2(node* &head){
  node* curr=head;
  node* prev=NULL;
  reverse(head,curr,prev);
  return head;
}
int main()
{
    node* node1=new node(10);
    node* head1=node1;     
    insertatpos(head1,20,2);
    print(head1);
    insertatpos(head1,30,3);
    print(head1);
    insertatpos(head1,40,4);
    print(head1);
    node* Head2=Reverse2(head1); 
   print(Head2);                 
    node* Head3=Reverse1(head1); 
   print(Head3);                
    
}