# include <iostream> //header file library
using namespace std; //using namespace std line can be omitted and replaced with the std keyword, followed by the ::

// cd /Users/joeyissa/Downloads/LearningCplus
// ./myfirstprogram
// basic variable syntax, print syntax

int main() {
    cout << "Hello World!"  << endl; //std::cout << "Hello World!";, << endl can be used to insert a new line, same rules as python/java
    cout << "I am learning C++"; 
    int myNum;
    myNum = 15;
    cout << myNum;
    int myAge = 35;
    cout << "I am " << myAge << " years old."; // combine both text and a variable, separate them with the << operator
    int x = 5, y = 6, z = 50; // can declare more then one variable of the same type
    int a, b, c;
    a = b = c = 50;
    const int myNum = 15;  // myNum will always be 15, const unchangeable and read-only similar to javascript

    return 0;
}
// run using ./myfirstprogram
/*
Commenting in C++ is the same as Java
Making Variables is the same as Java
*/