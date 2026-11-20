#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<< "Enter the value for array  ";
    cin>>n;
    int* arr = new int[n];
     for (int i = 0; i < n; i++) {
        cout << "Enter value " << i + 1 << ": ";
        cin >> arr[i];
     }
         cout << "You entered: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0 ;

}