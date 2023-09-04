#include <iostream>
using namespace std;

int main() {
    string x = "hello world";
    int y = x.length();  // get length of string

    cout << x[0] << endl; // can access parts of strings (like in python)

    x[0] = 'J'; // can change characters of the string
    cout << x;


    return 0;

}

// use the same methods to write special characters within strings

/* 
using namespace std line can be omitted and replaced with the std keyword, 
followed by the :: operator for string (and cout) objects
*/

// short hand Ternary Operator
// variable = (condition) ? expressionTrue : expressionFalse; (almost like python)