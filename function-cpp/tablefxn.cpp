// Print table using function 
#include<iostream>
using namespace std;
int table(int a,int n  ){
    for(int i=1;i<=n;i++){
        cout << a << "*"<< i << "=" << a*i << endl ;
    }
    return 0 ; 
}
int main(){
    int n =10;
    int a;
    cout<< "ENTER THE NUMBER FOR TABLE : \n ";
    cin>> a ;
    table(a,n);
    return 0;
}