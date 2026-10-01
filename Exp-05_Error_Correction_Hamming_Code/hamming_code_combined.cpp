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

    cout << "\nThe Sender code bits are: ";
    for(int i = 1; i <= 10; i++)
        cout << code[i] << " ";
    cout << endl;

    int p1, p2, p4, p8, error;

    cout << "\nEnter received code bits: ";
    for(int i = 1; i <= 10; i++)
        cin >> code[i];

    cout << "\nCheck bits: ";
    cout << "R1=" << code[1] << " ";
    cout << "R2=" << code[2] << " ";
    cout << "R3=" << code[4] << " ";
    cout << "R4=" << code[8];

    p1 = (code[1] + code[3] + code[5] + code[7] + code[9]) % 2;
    p2 = (code[2] + code[3] + code[6] + code[7] + code[10]) % 2;
    p4 = (code[4] + code[5] + code[6] + code[7]) % 2;
    p8 = (code[8] + code[9] + code[10]) % 2;

    error = p8 * 8 + p4 * 4 + p2 * 2 + p1;

    cout << "\n\nR1 check: " << p1;
    cout << "\nR2 check: " << p2;
    cout << "\nR3 check: " << p4;
    cout << "\nR4 check: " << p8;

    if(error == 0)
        cout << "\n\nNo error detected" << endl;
    else{
        cout << "\n\nError detected at position: " << error;

        code[error] = (code[error] + 1) % 2;

        cout << "\nCorrected code bits are: ";
        for(int i = 1; i <= 10; i++)
            cout << code[i] << " ";
        cout << endl;
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