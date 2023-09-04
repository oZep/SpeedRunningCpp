# include <iostream>
using namespace std;

// cd /Users/joeyissa/Downloads/LearningCplus
// ./comparators

int main() {
    int i = 0;
    while (i < 5) { // while loop syntax same as regular java
        cout << i << "\n";
        i ++;
    }
    // do/while loop. The loop will always be executed at least once, 
    // even if the condition is false, because the code block is executed before the condition is tested
    int x = 0;
    do {
        cout << x << "\n";
        x++;
    }
    while (x < 0);

    for (int k = 0; k < 5; k++) {
        cout << k << "\n";
    }

    int myNumbers[5] = {10, 20, 30, 40, 50};
    for (int j : myNumbers) {
        cout << j << "\n";
    }
}

// breal/continue is the same thing as java & python