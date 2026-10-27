// max of 2 no.
#include<iostream>
using namespace std ;
int maxOftwo(int a , int b ){
    return (a>b)? a : b ;
    //  condition ? value_if_true : value_if_false;
}
int main(){
   cout<<maxOftwo(10,20);
    return 0;
}