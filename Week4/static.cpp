#include "static.h"
int main() {
    // ==============================================
    //                EXERCISE 4.1
    // ==============================================
    Queue<int> numbers;
    cout << "ADDING NUMBERS: ";
    for (int i = 1; i <= 10; i++) {
        numbers.insert(i);
        cout << i << " ";
    }
    cout << "\n\nREMOVING NUMBERS: ";
    int num;
    for (int i = 0; i < 10; i++) {
        numbers.remove(num);
        cout << num << " ";
    }
    // ==============================================
    //                EXERCISE 4.2
    // ==============================================
    Queue<string> names[8];

    names[0].insert("hunain");
    names[1].insert("laraib");
    names[2].insert("ishmal");
    names[3].insert("zainab");
    names[4].insert("kashf");
    names[5].insert("rohan");
    names[6].insert("maryam");
    names[7].insert("sabbo");

    cout << "\n\nBESTIES NAMES ADDED AND REMOVED:\n";
    string besties;
    for (int i = 0; i < 8; i++) {
        names[i].remove(besties);
        cout << besties << " ";
    }
    cout << endl;
}

