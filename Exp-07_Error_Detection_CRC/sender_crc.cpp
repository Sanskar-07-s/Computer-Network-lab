#include<iostream>
using namespace std;

int main(){
    int n, m;

    cout << "Enter number of data bits: ";
    cin >> n;
    cout << "Enter number of generator bits: ";
    cin >> m;

    int data[50], d[20], f[70];

    cout << "\nEnter data bits: ";
    for(int i = 0; i < n; i++) {
        cin >> data[i];
        f[i] = data[i];
    }

    cout << "Enter generator bits: ";
    for(int j = 0; j < m; j++) {
        cin >> d[j];
    }

    int append = m - 1;
    for(int i = n; i < n + append; i++) {
        f[i] = 0;
    }

    for(int i = 0; i < n; i++) {
        if(f[i] == 1) {
            for(int j = 0; j < m; j++) {
                f[i + j] = f[i + j] ^ d[j];
            }
        }
    }

    cout << "\nCRC remainder: ";
    for(int i = n; i < n + append; i++) {
        cout << f[i] << " ";
    }

    cout << "\nTransmitted codeword: ";
    for(int i = 0; i < n; i++) {
        cout << data[i] << " ";
    }
    for(int i = n; i < n + append; i++) {
        cout << f[i] << " ";
    }
    cout << endl;

    return 0;
}
