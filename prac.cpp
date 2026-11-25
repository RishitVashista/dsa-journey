#include<iostream>
using namespace std;
int main(){
    int arr[]={3355,321,33,1,31,33,44,5};
    int largest=arr[0];
    for(int i=0;i<8;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    cout<< largest;
    return 0;
}