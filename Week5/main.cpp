#include <iostream>
#include <string>
#include "PQueue.h"
using namespace std;
int main() {
    int N;
    cout << "Enter the number of priority levels: ";
    cin >> N;
    PQueue<string> pq(N);
    pq.Insert("Habiba", 2);  
    pq.Insert("Zainab", 0);  
    pq.Insert("Kashf", 1);  
    pq.Insert("Maryam", 0);  
    pq.Insert("Rohan", 3);  
    pq.Insert("Sabahat", 2);  
    cout << "\nPriority Queue after insertions:\n";
    cout << "Inserting tasks with diff priorities...\n\n";
    string item;
    cout << "Removing tasks from the priority queue:\n";
    while (!pq.IsEmpty()) {
        pq.Remove(item);
        cout << item << endl;  
    }
    return 0;
}
