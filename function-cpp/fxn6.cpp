// call by Value vs call by Reference 
#include<iostream>
using namespace std;
void printf(int *x,int y){
    *x+=5;
    y*=4;
cout<<"x : "<< x << " , y :"<< y <<endl;
}
int main(){
    int a=12,b=7 ;
    printf(&a,b);
     cout<<"a:" <<a << "  " <<"b:"<< b << endl ; 
return 0 ;
//& means save the address call by refrence 
}