#include <iostream>
#include <iomanip> 

#include "DataAnalysis.h"

using namespace std;

int main() {
    cout << "==============================================\n";
    cout << "                DATA ANALYSIS                 \n";
    cout << "==============================================\n\n";
    //int sizes[] = { 2, 3, 4, 5, 6, 7, 8 };
    int sizes[] = { 8, 10, 12, 14, 16, 18, 20 };
    //int sizes[] = { 100, 500, 1000,5000, 10000, 20000, 50000 };
    cout << left << setw(5) << "N"
        << setw(10) << "Maximum"
        << setw(10) << "Minimum"
        << setw(10) << "Range"
        << setw(10) << "Sum"
        << setw(22) << "Product"
        << setw(10) << "Mean"
        << setw(10) << "Median"
        << setw(8) << "Mode"
        << setw(8) << "SD"
        << endl;
    cout << "-------------------------------------------------------------------------------------------------------" << endl;

    for (int size : sizes) {
        DataAnalysis<long long> data;
        long long* arr = data.getArray(size);
        if (!arr) {
            cerr << "Memory allocation failed for size " << size << endl;
            continue;
        }
        cout << setw(5) << size
            << setw(10) << data.maximum(arr, size)
            << setw(10) << data.minimum(arr, size)
            << setw(10) << data.range(arr, size)
            << setw(10) << data.sum(arr, size)
            << setw(22) << (data.product(arr, size))
            << setw(10) << data.mean(arr, size)
            << setw(10) << data.median(arr, size)
            << setw(8) << data.mode(arr, size)
            << setw(8) << data.standardDeviation(arr, size)
            << endl;

        delete[] arr;
    }
    cout << "\n-------------------------------------------------------------------------------------------------------" << endl;
    char choice;
    cout << "Continue to sorting and searching?? (Y/N) ";
    cin >> choice;
    if (choice == 'y' || choice == 'Y') {
        DataAnalysis <int>data;
        system("cls");
        cout << "Enter size of an array to sort it: ";
        int size; 
        cin >> size;
        int* arr = new int[size];

        cout << "\nEnter array elements: ";
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }
        cout << "\nYour original array: [ ";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }cout << " ]\n";

        int* original_array = new int[size];
        for (int i = 0; i < size; i++) {
            original_array[i] = arr[i];
        }

        cout << "\nSorted array: [ ";
        data.sorting(arr, size);
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }cout << "]";

        int num_to_search;
        cout << "\n\nEnter a number to search in array: ";
        cin >> num_to_search;
        cout << "\nYour number is at index " << data.search(arr, size, num_to_search) << " of sorted array.\n\n";
        cout << "Your number is at index " << data.search(original_array, size, num_to_search) << " of original array.\n\n";

        return 0;
    }
    else if(choice == 'N' || choice == 'n') {
        cout << "Exitting...\n\n";
        return 0;
    }
    else {
        cout << "Invalid choice...exitting\n\n ";
        return 0;
    }
    
}
