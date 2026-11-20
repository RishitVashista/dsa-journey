// call by Value vs call by Reference 
#include<iostream>
using namespace std;
void test(int &x,int y ){// formal parameter
    x+=5;
    y*=2;
    cout<< "x:"<<x << "  "<<"y;"<< y << endl;
}
int main(){
    int a=3,b=5;// actual parameters
    test(a,b);// values going to function 
    cout<<"a:" <<a << "  " <<"b:"<< b << endl ; 
    return 0 ;
}