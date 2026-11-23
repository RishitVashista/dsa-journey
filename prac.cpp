#include<iostream>
using namespace std;
int main(){
    int arr[]={21,22,32,321,332,1,31,33,44};
    int minimum=arr[0];
    for(int i =0;i<9;i++){
        if(arr[i]>minimum){
            minimum=arr[i];
        }
    }
    cout<< minimum;
    return 0;
}