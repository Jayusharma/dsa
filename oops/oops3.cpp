//inheritance 
#include<iostream>
using namespace std;
class human{
   
   private:
   int wieght;
    
   protected:
   string skin;

   public:
   int hieght;
   int age;
   

   int getAge(){
    return this->age;
   }
   void setHieght(int n){
    this->hieght=n;
   }
};
class Male:public human{
    
    public:
    string hair;

    void sethairColor(string h){
        this->hair=h;
    }
     string getSkin(){
        return this->skin;
    }
};
class Female:private human{
    
    public:
    int jewel;

    void getJewel(int h){
        this->jewel=h;
    }
     
    
};
class Trans:protected human{
    
    public:
    string nails;

    void setnailColor(string h){
        this->nails=h;
    }
    int getHiegh(){
        return this->hieght;
    }
    string getSkin(){
        return this->skin;
    }
};
int main()
{
    Male jay;
    jay.setHieght(5);
    cout<<"hieght is ->"<<jay.hieght<<endl;
    cout<<"skin is->"<<jay.getSkin()<<endl;
   // cout<<"wieght is->"<<jay.wieght<<endl; (inaccessible)

   Female radha;
  // radha.setHieght(5); (inaccessible)
    //cout<<"hieght is ->"<<radha.hieght<<endl;
    //cout<<"skin is->"<<radha.getSkin()<<endl;
   //cout<<"wieght is->"<<jay.wieght<<endl; 

   Trans talu;
   
    cout<<"hieght is ->"<<talu.getHiegh()<<endl;
    cout<<"skin is->"<<talu.getSkin()<<endl;
   // cout<<"wieght is->"<<jay.wieght<<endl; (inaccessible)
}