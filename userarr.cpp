#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array "<< endl ;
    cin >> n ;
    int arr[n];// for size of the array 
    for(int i =0;i<n;i++){
        cin>> arr[i];// for element inside the array 
    }
    cout<< "Real element in array is : " ;
    for(int i=0;i<n;i++){
        cout<< arr[i]<< "  " ;// print the elemt of array .
    }
cout << "The Size of array is : = " << n << endl;
cout <<"Inverted elemnt in array : ";
for(int i=n-1;i>=0;i--){
        cout<< arr[i] << "  " ;// invert the elemnets of array 
    }
    return 0 ;
}