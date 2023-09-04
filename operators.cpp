# include <iostream>
using namespace std;

// cd /Users/joeyissa/Downloads/LearningCplus
// ./operators

int main() {
    int x = 5; // 0101
    x |= 3;  //bitwise OR operator, 0011
    cout << x << endl;

    int y = 5; // 0101
    y >>= 3; //bitwise leftshift operator, shits right by 3 positions
    cout << y;

    return 0;
}

// Bitwise OR operation:
// 0101
// 0011
// -----
// 0111 (7 in decimal)

// 	x = x & 3 Bitwise AND operator

// >> is the bitwise right shift operator.  shifts the bits to the right by # positions:
// << bitwise left shift operator. Shifts the bits to the left by # operations

// logical comparisons and operators is the same as java
