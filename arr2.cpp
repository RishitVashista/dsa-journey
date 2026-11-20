#include<iostream>
using namespace std;

int main() {
    int arr[] = {3, 2, 1, 5, 2};
    int n = 5;

    // Bubble Sort
    for (int i = 0; i < n - 1; i++) {          // outer: n-1 passes
        for (int j = 0; j < n - i - 1; j++) {  // inner: compare pairs
            if (arr[j] > arr[j + 1]) {         // ✅ bada pehle? swap karo
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Print
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
