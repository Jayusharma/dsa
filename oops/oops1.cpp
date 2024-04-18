//implementing classes and objects.
#include<iostream>
using namespace std;
class student{
  
  
  private: //only accessed by class memebers.
  string subject;

  public: //anyone can access.
  int age;
  char grade;

//calling default constructor 
  student(){
    cout<<"consturctor called"<<endl;
  }
//calling parmeterized constructor.
student(int age ,char grade,string subject){


  this->age= age;
  this->grade= grade;
  this->subject= subject;
}
//copy constructor 
student(student& temp){
  this->age=temp.age;
  this->grade=temp.grade;
  this->subject=temp.subject;
}
void print(){
  cout<<"age->"<<age<<endl;
  cout<<"grade->"<<grade<<endl;
  cout<<"subject->"<<subject<<endl;
}
  //for accessing private memeber.
  
  string getSubject(){
    return subject;
  }

  void setSubject(string h){
    subject=h;
  }

  };

int main()
{
    //creation of object.
    student pamu(14,'c',"science");  //static allocation .
    
   
   /*
   accessing data members.
   pamu.grade='E';
   */
   
   pamu.print();
  
   /* 
   string h="maths";
    pamu.setSubject(h);
    cout<<"pamu's subject is "<<pamu.getSubject()<<endl;
  */

  //dyamic allocation .
    student *chomu=new student(16,'B',"maths");

    /*
    (*chomu).age=16;
    string e="science";
    chomu->setSubject(e); 
    */
    chomu->print();
    // or (*chomu).print();
    // cout<<"chomu age is "<<chomu->age<<endl;
    student chamiya(pamu);
    chamiya.print();
    student ramiya(*chomu);
    ramiya.print();
}