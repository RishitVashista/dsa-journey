 #include <iostream>
#include <string>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    string words[] = {"one", "two", "three", "four", "five",
                      "six", "seven", "eight", "nine", "ten",
                      "eleven", "twelve", "thirteen", "fourteen", "fifteen",
                      "sixteen", "seventeen", "eighteen", "nineteen"};

    for (int i = a; i <= b; i++) {
        if (i >= 1 && i <= 19) {
            cout << words[i - 1] << endl;   // 1..19 → English word
        }
        else if (i % 2 == 0) {
            cout << "even" << endl;         // 20+ even
        }
        else {
            cout << "odd" << endl;          // 20+ odd
        }
    }
    return 0;
}