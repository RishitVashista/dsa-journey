// Function isEven(int n)  true/false return 
#include <iostream>
using namespace std;
bool isEven(int n){
    return n%2==0;
}
int main(){
    int n ;
    cout << "Enter a value for n to check . " ;
    cin>> n;
    cout<<isEven(n);
    return 0 ;
}