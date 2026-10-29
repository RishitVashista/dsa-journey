// call by Value vs call by Reference 
#include<iostream>
using namespace std;
void test(int x,int y ){
    x+=5;
    y*=2;
    cout<< x<< y << endl;
}
int main(){
    int a=3,b=5;
    test(a,b);
    cout<< a << b << endl ; 
    return 0 ;
}