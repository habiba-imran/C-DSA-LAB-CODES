# 📊 Data Analysis Program

## 📌 Description
This program implements various data analysis operations using recursion. It is designed for analyzing an array of numbers and performing the following operations:

- Sum
- Mean
- Product
- Maximum
- Minimum
- Range
- Sorting
- Median
- Standard Deviation
- Mode
- Searching

The operations are carried out using a class `DataAnalysis` templated with a data type `T`, allowing users to analyze arrays of different types (e.g., `int`, `long long`).

---

## 📂 Files

### 📜 `DataAnalysis.h`
This header file defines the class `DataAnalysis`, which contains several methods to perform data analysis on an array.

#### 📌 Methods in `DataAnalysis` Class:

- **getArray(int size)**: Initializes an array of size `size` and returns it.
- **sum(T* array, int size)**: Calculates the sum of the elements in the array using recursion.
- **mean(T* array, int size)**: Computes the mean (average) of the array elements.
- **product(T* array, int size)**: Computes the product of the elements in the array recursively.
- **maximum(T* array, int size)**: Finds the maximum value in the array using recursion.
- **minimum(T* array, int size)**: Finds the minimum value in the array recursively.
- **range(T* array, int size)**: Computes the range (difference between maximum and minimum) of the array.
- **sorting(T* array, int size)**: Sorts the array in ascending order using recursion.
- **median(T* array, int size)**: Computes the median value of the array after sorting it.
- **standardDeviation(T* array, int size)**: Computes the standard deviation of the array.
- **mode(T* array, int size)**: Computes the mode (most frequent element) of the array.
- **search(T* array, int size, int num)**: Searches for a number `num` in the array and returns its index (if found).

---

### 📌 `main.cpp`
The `main.cpp` file demonstrates the usage of the `DataAnalysis` class.

#### 🛠️ Features:
- The program initializes an array of varying sizes and displays the results of various data analysis operations (e.g., maximum, minimum, range, mean, etc.).
- After displaying the results for various array sizes, it prompts the user to perform sorting and searching on a user-defined array.
- The user can input the elements of the array and sort it. Then, they can search for a specific number in both the sorted and original arrays.

#### 📋 Output:
For each array size, the program outputs the following metrics:
- Maximum
- Minimum
- Range
- Sum
- Product
- Mean
- Median
- Mode
- Standard Deviation

After completing the basic analysis, the user is prompted whether they want to proceed with sorting and searching in an array.

---

## 🚀 Compilation Instructions

1. Create the necessary files, `DataAnalysis.h` and `main.cpp`, in the same directory.
2. Use the following command to compile the program:
   ```bash
   g++ -o data_analysis main.cpp
   ```
3. Run the program using:
   ```bash
   ./data_analysis
   ```

---

Happy Coding! 🎯🚀

