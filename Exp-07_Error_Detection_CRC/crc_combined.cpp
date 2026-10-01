#include<iostream>
#include <cstdlib>
using namespace std;

int main(){
    int append=0;
    int n,m,o;
    
    cout<<"Enter number of Frames: ";
    cin>>n;
    cout<<"Enter number of Divisor: ";
    cin>>m;

    int f[n+m-1];
    int d[m];

    cout<<"\nEnter Frames: ";
    for(int i=0;i<n;i++)
    cin>>f[i];

    cout<<"Enter Divisor: ";
    for(int j=0;j<m;j++)
        cin>>d[j];
    
    append=m-1;
    for(int i=n;i<n+append;i++)
        f[i]=0;

    cout<<"\nFrame after appending 0's: ";
    for(int i=0;i<n+append;i++)
        cout<<f[i]<<" ";

    cout<<"\n---------CRC Calculation---------\n"<<endl;

    for(int i=0;i<=n;i++){
        if(f[i]==1){
            for(int j=0;j<m;j++)
                f[i+j]=f[i+j]^d[j];
        }else{
            for(int j=0;j<m;j++)
                f[i+j]=f[i+j]^0;
            
        }
    }

int error=0;
    cout<<"Reminder: ";
    for(int i=n;i<n+append;i++){
        cout<<f[i]<<" ";    
        if(f[i]==1)
            error=1;
    }
    if(error==0)
        cout<<"\nNo error found.";
    else
        cout<<"\nError found.";
    return 0;
}