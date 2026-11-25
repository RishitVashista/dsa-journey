//Second smallest element in array 
#include<iostream>
#include <climits>// library that define the limits of the integer values
using namespace std;
int main(){
    int arr[5]={22,32,24,42,53};
    int minimum=arr[0];
    for(int i=0;i<5;i++){
        if(arr[i]<minimum){
            minimum=arr[i];
        }
    }
     int second_minimum = INT_MAX;
    for (int i = 0; i < 5; i++) {
        if (arr[i] < second_minimum && arr[i] > minimum) {
            second_minimum = arr[i];
        }
    }
     cout << "Second minimum = " << second_minimum << endl;
    cout<<"The minimum element is :"<< minimum ;
    return 0;
}