//referenece variable/pass by address.
#include<iostream>
using namespace std;
void update(int n ){
    cout<<"address in function  "<<&n<<endl;
    n++;
}
int main()
{
    int n=5;
    cout<<"address in main "<<&n<<endl;
    cout<<"before "<<n<<endl;
    update(n);
  cout<<"after "<<n<<endl;
    
    int *dynamic =new int;
    cout<<"address stored in dynamic->"<<dynamic<<endl;
    cout<<"value in that address->"<<*dynamic<<endl;
    *dynamic=2;
     cout<<"updated valur is->"<<*dynamic<<endl;
     dynamic++;
     cout<<"updated address is->"<<dynamic<<endl;
     cout<<"value at dynamic is->"<<*dynamic<<endl;
     cout<<"value at old address is "<<*(dynamic-1)<<endl;
    
    int *array =new int[5];
    cout<<"enter values->"<<endl;
    for (int i = 0; i < 5; i++)
    {
      cin>>*(array+i);
    }
    int size;
    cout<<"enter the new size";
    cin>>size;

  int *newDynamicArray = new int[size];
copy(array, array + 5, newDynamicArray);
delete[] array;
for (int  i = 5; i < size; i++)
{
   cin>>*(newDynamicArray+i);
}
//output
for (int  i = 0; i < size; i++)
{
   cout<<*(newDynamicArray+i)<<" ";
}


}