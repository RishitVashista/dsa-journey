// convert an unsorted array to sorted array  12 45 23 51 19 8 
#include<iostream>
using namespace std;
int main(){
    int n ; 
    cin>> n ;
    int arr[n]; // enter the size of array 
    for (int i =0;i<n;i++){
        cin>> arr[i] ; // enter the value of array
    }
        for (int i =0;i<n-1 ;i++){
            for(int j =i+1;j<n;j++){
                if(arr[j]<arr[i]){
                    int temp= arr[j];
                    arr[j]=arr[i];
                    arr[i]=temp;
                }
            }
        }
        for(int i =0 ;i<n;i++){
            cout << arr[i]<<"  " ;
        }
    return 0 ;
}