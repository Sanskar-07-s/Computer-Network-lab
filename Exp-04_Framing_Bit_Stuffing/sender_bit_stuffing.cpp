#include <iostream>
using namespace std;

int main() {
    int arr[50], out[100];
    int n, j = 0, count = 0;

    cout << "Enter number of bits: ";
    cin >> n;

    cout << "Enter bits: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        out[j++] = arr[i];

        if (arr[i] == 1) {
            count++;
        } else {
            count = 0;
        }

        if (count == 5) {
            out[j++] = 0;
            count = 0;
        }
    }

    cout << "\nAfter Bit Stuffing: ";
    for (int i = 0; i < j; i++) {
        cout << out[i] << " ";
    }
    cout << endl;

    return 0;
}
