#include<iostream>
using namespace std;

int main(){
   int a=0,b=0,c=0,d=0;
   int n=0;
   cout<<"Enter IP Address: ";
   cin>>a>>b>>c>>d;

   cout<<"IP Address:"<<a<<"."<<b<<"."<<c<<"."<<d<<endl;

   if(a>=0 && a<=127){
      cout<<"\nClass A"<<endl;
      cout<<"N/W Mask:255.0.0.0"<<endl;
      n=8;
   }else if(a>=128 && a<=191){
      cout<<"\nClass B"<<endl;
      cout<<"N/W Mask:255.255.0.0"<<endl;
      n=16;
   }else if(a>=192 && a<=223){
      cout<<"\nClass C"<<endl;
      cout<<"N/W Mask:255.255.255.0"<<endl;
      n=24;
   }else if(a>=224 && a<=239){
      cout<<"\nClass D"<<endl;
      cout<<"N/W Mask:255.255.255.255"<<endl;
      n=32;
   }else if(a>=240 && a<=255){
      cout<<"\nClass E"<<endl;
      cout<<"N/W Mask:255.255.255.255"<<endl;
      n=32;
   }else{
      cout<<"\nInvalid IP Address"<<endl;
   }


   cout<<"\nn="<<n<<endl;
   cout<<"Number of addresses(2^(32-n)): "<<(1<<(32-n))<<endl;

   if(n==8){
      cout<<"\n1'st Address: "<<a<<".0.0.0"<<endl;
      cout<<"Last Address: "<<a<<".255.255.255"<<endl;
   }else if(n==16){
      cout<<"\n1'st Address: "<<a<<"."<<b<<".0.0"<<endl;
      cout<<"Last Address: "<<a<<"."<<b<<".255.255"<<endl;
   }else if(n==24){
      cout<<"\n1'st Address: "<<a<<"."<<b<<"."<<c<<".0"<<endl;
      cout<<"Last Address: "<<a<<"."<<b<<"."<<c<<".255"<<endl;
   }else if(n==32){
      cout<<"\n1'st Address: "<<a<<"."<<b<<"."<<c<<"."<<d<<endl;
      cout<<"Last Address: "<<a<<"."<<b<<"."<<c<<"."<<d<<endl;
   }else{ 
      cout<<"\nInvalid IP Address"<<endl;
   }

   return 0;
}