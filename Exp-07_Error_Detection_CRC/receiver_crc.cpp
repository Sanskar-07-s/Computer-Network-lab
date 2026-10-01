#include<iostream>
using namespace std;

int main(){
    int n, m;

    cout << "Enter number of codeword bits: ";
    cin >> n;
    cout << "Enter number of generator bits: ";
    cin >> m;

    int f[70], d[20];

    cout << "\nEnter received codeword: ";
    for(int i = 0; i < n; i++) {
        cin >> f[i];
    }

    cout << "Enter generator bits: ";
    for(int j = 0; j < m; j++) {
        cin >> d[j];
    }

    int k = n - (m - 1);
    for(int i = 0; i < k; i++) {
        if(f[i] == 1) {
            for(int j = 0; j < m; j++) {
                f[i + j] = f[i + j] ^ d[j];
            }
        }
    }

    int error = 0;
    for(int i = k; i < n; i++) {
        if(f[i] == 1) {
            error = 1;
        }
    }

    if(error == 0) {
        cout << "\nNo error detected. Data is correct." << endl;
    } else {
        cout << "\nError detected in received codeword." << endl;
    }

    return 0;
}
