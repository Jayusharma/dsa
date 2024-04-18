//shallow copy 
#include<iostream>
#include<string>

using namespace std;
class student{
  
  
  private: //only accessed by class memebers.
  string *subject;

  public: //anyone can access.
  int age;
  char grade;

//calling default constructor 
  student(){
    cout<<"consturctor called"<<endl;
    subject= new string;

  }
//calling parmeterized constructor.
student(int age ,char grade,string subject){
  
  this->age= age;
  this->grade= grade;
  this->subject= new string(subject);
}
//deep copy.
student(student& temp){
  string *copi=new string(*temp.subject);
  
  this->subject=copi;
  this->age= temp.age;
  this->grade= temp.grade;
  
  
}

void print(){
  cout<<"age->"<<age<<endl;
  cout<<"grade->"<<grade<<endl;
  cout<<"subject->"<<*subject<<endl;
}
  //for accessing private memeber.
  
 void setSubject(char h,int i){
  (*subject)[i]=h;
 }

 void setAge(int i){
  age=i;
 }

  };

int main()
{
    student hannah(14,'c',"social");
    
    hannah.print();

   //using default copy constructor 
    student sofia(hannah);
    sofia.print();
     
    hannah.setSubject('p',0);
    hannah.setAge(17);
    hannah.print();
    sofia.print();
     



  



}