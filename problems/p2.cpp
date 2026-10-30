  #include <iostream>
#include <string>
using namespace std;

int main() {
    int a=8, b=11;
     

    string words[] = {"one", "two", "three", "four", "five",
                      "six", "seven", "eight", "nine", "ten",
                      "eleven", "twelve", "thirteen", "fourteen", "fifteen",
                      "sixteen", "seventeen", "eighteen", "nineteen"};

    for (int i = a; i <= b; i++) {
        if (i >= 10 && i <= 19) {
            cout << words[i - 1] << endl;   
        }
        else if (i % 2 == 0) {
            cout << "even" << endl;          
        }
        else {
            cout << "odd" << endl;          
        }
    }
    return 0;
}