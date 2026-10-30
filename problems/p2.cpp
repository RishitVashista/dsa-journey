// intput 8,11
// output 
// eight 
// nine
// 10
// 11
#include<iostream>
using namespace std;
int main (){
    int a=8;
    int b =11;
    string words[]={"one","two","three","four","five","six","seven","eight","nine"};
    for(int i =a;i<=b;i++){
        if (i>=1&&i<=9){
            cout<< words[i-1]<< endl;}
            else if(i%2==0){
                cout<< "even"<<endl;

            }else{
                cout<<"odd"<<endl;
            }
        }
        return 0 ;
    }

