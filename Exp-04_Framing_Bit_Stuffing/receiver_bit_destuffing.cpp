#include <iostream>
using namespace std;

int main() {
    int arr[100], out[50];
    int n, j = 0, count = 0;

    cout << "Enter number of received bits: ";
    cin >> n;

    cout << "Enter received bits: ";
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
            i++;
            count = 0;
        }
    }

    cout << "\nAfter De-stuffing: ";
    for (int i = 0; i < j; i++) {
        cout << out[i] << " ";
    }
    cout << endl;

    return 0;
}
