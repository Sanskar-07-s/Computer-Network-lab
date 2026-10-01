#include<iostream>
#include <cstdlib>
#include <ctime>
#include <unistd.h>
using namespace std;

int main(){

int n,delay;
int arr[20];
int timeout=5;

srand(time(0));

cout<<"Enter number of frame: ";
cin>>n;

cout<<"Enter frames: ";
for(int i=0;i<n;i++){
    cin>>arr[i];
};

cout<<"\n---------Stop and Wait ARQ---------\n"<<endl;

for(int i=0;i<n;i++){
    cout<<"\nSending frame: "<<arr[i]<<endl;
    delay=rand()%10;
    if(timeout<delay){
        cout<<"ACK received for frame: "<<arr[i]<<endl;
    }else{
        cout<<"ACK not received for frame: "<<arr[i]<<endl;
        cout<<"Timeout occurred for frame: "<<arr[i]<<endl;
             for(int j=0;j<timeout;j++){
             cout<<"Waiting for ACK..."<<endl;
             sleep(1);
             }
        cout<<"Resending frame: "<<arr[i]<<endl;
        i--;
    }

    cout<<"Delay: "<<delay<<" seconds"<<endl;
}

cout<<"\n-----All frames send and ACK received successfully-----\n"<<endl;
cout<<"Total frames sent: "<<n<<endl;
cout<<"End of Stop and Wait ARQ\n"<<endl;

return 0;
}