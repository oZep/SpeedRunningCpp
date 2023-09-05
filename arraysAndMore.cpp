# include <iostream>
using namespace std;

// cd /Users/joeyissa/Downloads/LearningCplus
// ./arraysAndMore


int main() {
    string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"}; // you don't have to specify the size of the array
    cout << cars[0] << endl;
    cars[0] = "Opel";
    cout << cars[0] << endl;
    cout << sizeof(cars) << endl; // use sizeof(): returns the size of a type in bytes.
    cout << sizeof(cars)/sizeof(string) << endl; // To find out how many elements an array has, you have to divide the size of the array by the size of the data type it contains:

        // declaring a stucture
    struct {             // Structure declaration
    int myNum;         // Member (int variable)
    string myString;   // Member (string variable)
    } myStructure;       // Structure variable

    // assign values to the members 
    myStructure.myNum = 1;
    myStructure.myString = "Hello World!";

    cout << myStructure.myNum << "\n";
    cout << myStructure.myString << "\n";

    // A reference variable is a "reference" to an existing variable, and it is created with the & operator
    string food = "Pizza";
    string &meal = food;

    cout << food << "\n";
    cout << meal << "\n";

    return 0;
}

// possible to declare an array without specifying the elements on declaration, and add them later

// iterate through an array
// for (int i = 0; i < sizeof(myNumbers) / sizeof(int); i++) 

