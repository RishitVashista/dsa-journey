//sort an an array and remove the duplicates 
#include<iostream>
using namespace std;
int main(){
      int n; // for size of array
    cin >> n;
    if (n <= 0)
    {
        cout << "Invalid size" << endl;
        return 0;
    }

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];// for elemnets of array
    }
    for(int i =0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                int temp= arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    for (int i = 0; i < n; i++){
        cout<< arr[i]<< "  ";
    }

    return 0 ;
}