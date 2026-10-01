#include<iostream>
using namespace std;

int main(){

int arr[20],out[50];
int i,j=0,n,count=0;

cout<<"Enter number of bits: ";
cin>>n;

cout<<"Enter bits: ";
for(i=0;i<n;i++){
    cin>>arr[i];
};

for(i=0;i<n;i++){
  out[j++]=arr[i];
  if(arr[i]==1){
     count++;
  }else{
     count=0;
  }
  if(count==5){
     out[j++]=0;
     count=0;
  }
};

cout<<"After bit stuffing: ";
for(j=0;j<n;j++){
cout<<out[j];
};

cout<<"After De-stuffing: ";
count=0;

for(i=0;i<j;i++){
   cout<<out[j];
   if(out[j]==1){
      count++;
   }else{
      count=0;
   if(count==5){
      i++;
      count=0;
      }
};


}
return 0;
}