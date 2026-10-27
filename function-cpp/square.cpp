// SQUARE OF ANY NUMBER 
#include<iostream>
using namespace std;
int sqN(int a){
    return a*a ;
}
int main(){
    int a ;
    cout<< "ENTER THE VALUE OF A \n" ;
    cin>> a;
    int result= sqN(a);
    cout<< "SQUARE OF THE NUMBER" << a <<"is :" << result ;
    return 0 ;
}