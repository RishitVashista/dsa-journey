// find the minimum in an array
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {22, 3, 22, 33, 333, 12, 123, 1, 2};
    int minimum = arr[0];
    for (int i = 0;i<=8;i++){
        if(arr[i]<minimum){
            minimum=arr[i];

        }
    }
    cout<< minimum ;
        return 0;
}