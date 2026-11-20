// call by Value vs call by Reference addition
#include<iostream>
using namespace std;
int addn(int &x,int y ){
    x=x+5;
    y=y*5;
    cout<<"x : "<< x << " , y :"<< y <<endl;
    return (x,y);
}
int main(){
    int a=5 , b=4 ;
    addn(a,b);
    cout<<"a : "<< a << "  , b :"<< b <<endl;
    return 0 ;
}