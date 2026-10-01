#include<iostream>
using namespace std;

int main(){
    int data[10], code[20];

    cout << "Enter 6 data bits: ";
    for(int i = 1; i <= 6; i++)
        cin >> data[i];

    code[3] = data[1];
    code[5] = data[2];
    code[6] = data[3];
    code[7] = data[4];
    code[9] = data[5];
    code[10] = data[6];

    code[1] = (code[3] + code[5] + code[7] + code[9]) % 2;
    code[2] = (code[3] + code[6] + code[7] + code[10]) % 2;
    code[4] = (code[5] + code[6] + code[7]) % 2;
    code[8] = (code[9] + code[10]) % 2;

    cout << "\nGenerated Hamming code bits: ";
    for(int i = 1; i <= 10; i++)
        cout << code[i] << " ";
    cout << endl;

    return 0;
}
