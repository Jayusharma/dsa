//find the middle of the linked list 
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
int getLength(node* head){

int cnt=0;
while(head !=NULL){

head=head->next;
  cnt++;

}
return cnt;
}
node* mid(node* head){

int len=getLength(head);
int ans=(len/2)+1;
node* temp=head;
int cnt=0;
while(cnt<ans-1){
  temp= temp->next;
  cnt++;
}
return temp;

}

int main()
{
    node* node1=new node(10);
    node* head=node1;     
    insertatpos(head,20,2);
    print(head);
    insertatpos(head,30,3);
    print(head);
    insertatpos(head,40,4);
    print(head);
    insertatpos(head,50,5);
    print(head);
    insertatpos(head,60,6);
    print(head);
    insertatpos(head,70,7);
    print(head);
    cout<<"mid is ->"<<mid(head)->data<<endl;

}