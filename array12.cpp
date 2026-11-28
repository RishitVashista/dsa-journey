#include <iostream>

int main() {
    int arr[] = {3, 1, 2, 3, 2, 1, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    int write = 0;                      // position to write next unique element
    for (int i = 0; i < n; i++) {
        bool duplicate = false;
        for (int j = 0; j < write; j++) {   // check against already-kept elements
            if (arr[j] == arr[i]) {
                duplicate = true;
                break;
            }
        }
        if (!duplicate) {
            arr[write] = arr[i];        // keep it
            write++;
        }
    }
    n = write;                          // new logical size

    for (int i = 0; i < n; i++)
        std::cout << arr[i] << " ";     // 3 1 2 4
}