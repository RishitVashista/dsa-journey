 // find the largest element in array{3,2,1,5,2}
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,4,3,2,6,5,7};
    int largest=arr[0] ;
    for(int i=0;i<=7;i++){
        if(arr[i] > largest){
            largest=arr[i];
        }
    }
    cout<< largest;
    return 0 ;
}
