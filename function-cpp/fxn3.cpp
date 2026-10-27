// Factorial
#include<iostream>
using namespace std;
int factorial(int n){
    int result=1 ;
    for (int i = 1 ;i<=n ;i++){
        result=result*i;
    }
    return result ;
}
    int main(){
        int n=5;

        cout << "FACTORIAL OF "<< n << " is :"<< factorial(n);
        return 0;
    }
