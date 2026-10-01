#include<iostream>
using namespace std;

int main(){
   int a=0,b=0,c=0,d=0,e=0;
   cout<<"Enter IP Address: ";
   cin>>a>>b>>c>>d>>e;
   int n=e;
   cout<<"\nIP Address:"<<a<<"."<<b<<"."<<c<<"."<<d<<"/"<<e<<endl;

   cout<<"n="<<n<<endl;
   cout<<"Number of addresses(2^(32-n)): "<<(1<<(32-n))<<endl;

    if(n==8){
      cout<<"\nPrefix length: "<<n<<endl;
      cout<<"N/W Mask:255.0.0.0"<<endl;
      cout<<"\n1'st Address: "<<a<<".0.0.0"<<"/"<<n<<endl;
      cout<<"Last Address: "<<a<<".255.255.255"<<"/"<<n<<endl;
   }else if(n==16){
      cout<<"\nPrefix length: "<<n<<endl;
      cout<<"N/W Mask:255.255.0.0"<<endl;   
      cout<<"\n1'st Address: "<<a<<"."<<b<<".0.0"<<"/"<<n<<endl;
      cout<<"Last Address: "<<a<<"."<<b<<".255.255"<<"/"<<n<<endl;
   }else if(n==24){
      cout<<"\nPrefix length: "<<n<<endl;
      cout<<"N/W Mask:255.255.255.0"<<endl;
      cout<<"\n1'st Address: "<<a<<"."<<b<<"."<<c<<".0"<<"/"<<n<<endl;
      cout<<"Last Address: "<<a<<"."<<b<<"."<<c<<".255"<<"/"<<n<<endl;
   }else if(n==32){
      cout<<"\nPrefix length: "<<n<<endl;
      cout<<"N/W Mask:255.255.255.255"<<endl;
      cout<<"\n1'st Address: "<<a<<"."<<b<<"."<<c<<"."<<d<<"/"<<n<<endl;
      cout<<"Last Address: "<<a<<"."<<b<<"."<<c<<"."<<d<<"/"<<n<<endl;
   }else{
      cout<<"\nInvalid IP Address"<<endl;
   }

    
    return 0;
}