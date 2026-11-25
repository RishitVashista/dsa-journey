//Second largest element in array 
#include<iostream>
#include <climits>// library that define the limits of the integer values
using namespace std;
int main(){
    int arr[5]={22,32,24,42,53};
    int largest=arr[0];
    for(int i=0;i<5;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
     int second_largest = INT_MIN;
    for (int i = 0; i < 5; i++) {
        if (arr[i] > second_largest && arr[i] < largest) {
            second_largest = arr[i];
        }
    }
     cout << "Second largest = " << second_largest << endl;
    cout<<"The Largest element is :"<< largest ;
    return 0;
}