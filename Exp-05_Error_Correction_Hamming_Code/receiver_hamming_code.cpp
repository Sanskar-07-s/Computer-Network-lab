#include<iostream>
using namespace std;

int main(){
  int code[20], p1, p2, p4, p8, error;

  cout << "Enter received code bits: ";
  for(int i = 1; i <= 10; i++)
      cin >> code[i];

  p1=(code[1]+code[3]+code[5]+code[7]+code[9])%2;
  p2=(code[2]+code[3]+code[6]+code[7]+code[10])%2;
  p4=(code[4]+code[5]+code[6]+code[7])%2;
  p8=(code[8]+code[9]+code[10])%2;

  error=p8*8+p4*4+p2*2+p1;

  if(error==0)
      cout << "\nNo error detected";
  else{
      cout << "\nError detected at position: " << error;

      code[error]=(code[error]+1)%2;

      cout << "\nCorrected code bits are: ";
      for(int i = 1; i <= 10; i++)
          cout << code[i] << " ";
  }

  cout << "\nData bits are: ";
  cout << code[3] << " "
       << code[5] << " "
       << code[6] << " "
       << code[7] << " "
       << code[9] << " "
       << code[10] << endl;

  return 0;
}