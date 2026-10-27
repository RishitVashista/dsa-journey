// SUM OF TWO NUMBERS WITH USER INPUT 
#include <iostream>
using namespace std;
int sumN(int a, int b)
{
    return (a + b);
}
int main()
{
    int a;
    int b;
    cout <<"ENTER VALUES FOR A AND B " << endl ;
    cin >> a >> b;
    int result= sumN(a,b);
    cout<< "THE SUM OF A AND B IS : " << result ; 

    return 0;
}