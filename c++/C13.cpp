//print fibonacci series 
 #include<iostream>
  using namespace std; 
  int main() 
  { 
 
    int n;
    cout<<"enter the value of n"<<endl; 
     cin>>n; 
     cout<<"fibonacci series is:"<<endl;
     int a=0;
     int b=1;
     cout<<a<<" "<<b<<" ";
    
      for ( int i = 1; i<=n; i++) 
      { 
       int sum=a+b;
       cout<<sum<<" ";
        a=b;
        b=sum;
        
        }
      
        }