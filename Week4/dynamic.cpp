#include "dynamic.h"

int main() {
    // ==============================================
    //                EXERCISE 4.1
    // ==============================================
    Queue<int> numbers(10);
    cout << "INSERTING NUMBERS: ";
    for (int i = 0; i < 10; i++) {
        numbers.insert(i);
        cout << i << " ";
    }
    int num;
    cout << "\n\nREMOVING NUMBERS: ";
    for (int i = 0; i < 10; i++) {
        numbers.remove(num);
        cout << num << " ";
    }
    // ==============================================
    //                EXERCISE 4.2
    // ==============================================
    Queue<string> names(8);
    cout << "\n\nNAMES OF BESTIES: ";
    names.insert("hunain");
    names.insert("laraib");
    names.insert("ishmal");
    names.insert("zainab");
    names.insert("kashf");
    names.insert("rohan");
    names.insert("maryam");
    names.insert("sabbo");
    string besties;
    for (int i = 0; i < 8; i++) {
        names.remove(besties);
        cout << besties << " ";
    }
    cout << "\n\n";
}
