#ifndef DATA_ANALYSIS_H
#define DATA_ANALYSIS_H
#include<iostream>
#include<iomanip>
#include<cmath>

template<class T>
class DataAnalysis {
public:
	T* getArray(int size);
	long long sum(T* array, int size);
	float mean(T* array, int size);
	long long product(T* array, int size);
	T maximum(T* array, int size);
	T minimum(T* array, int size);
	T range(T* array, int size);
	void sorting(T* array, int size);
	float median(T* array, int size);
	float standardDeviation(T* array, int size);
	int mode(T* array, int size);
	int search(T* array, int size, int num);
};

template <class T>
T* DataAnalysis<T>::getArray(int size) {
	T* arr = new T[size];
	if (!arr) return nullptr;
	for (int i = 0; i < size; i++) {
		arr[i] = i + 1;
	}
	return arr;
}

template<class T>
long long DataAnalysis<T>::sum(T* array, int size) {
	if (size <= 0) {
		return 0;
	}
	return array[size - 1] + sum(array, size - 1);
}

template <class T>
float DataAnalysis<T>::mean(T* array, int size) {
	if (size == 0) return 0;
	return (sum(array, size)) / (float)size;
}

template<class T>
long long DataAnalysis<T>::product(T* array, int size) {
	if (size <= 0) {
		return 1;
	}
	else {
		return (array[size - 1] * product(array, size - 1));
	}
}

template<class T>
T DataAnalysis<T>::maximum(T* array, int size) {
	if (size == 1) {
		return array[0];
	}
	T max_of_rest = maximum(array, size - 1);
	if (array[size - 1] > max_of_rest) {
		return array[size - 1];
	}
	else {
		return max_of_rest;
	}
}

template<class T>
T DataAnalysis<T>::minimum(T* array, int size) {
	if (size == 1) {
		return array[0];
	}
	T min_of_rest = minimum(array, size - 1);
	if (array[size - 1] < min_of_rest) {
		return array[size - 1];
	}
	else {
		return min_of_rest;
	}
}

template<class T>
T DataAnalysis<T>::range(T* array, int size) {
	return DataAnalysis<T>::maximum(array, size) - DataAnalysis<T>::minimum(array, size);
}

template<class T>
void DataAnalysis<T>::sorting(T* array, int size) {
	if (size <= 1) return;
	for (int i = 0; i < size - 1; i++) {
		if (array[i] > array[i + 1]) {
			T temp = array[i];
			array[i] = array[i + 1];
			array[i + 1] = temp;
		}
	}
	sorting(array, size - 1);
}

template <class T>
float DataAnalysis<T>::median(T* array, int size) {
	sorting(array, size);
	if (size % 2 != 0) {
		return (array[size / 2]);
	}
	else {
		return ((array[size / 2 - 1]) + (array[size / 2])) / 2.0;
	}
}

template <class T>
float DataAnalysis<T>::standardDeviation(T* array, int size) {
	double mean_value = mean(array, size);
	double sum_squared_diff = 0.0;

	for (int i = 0; i < size; i++) {
		sum_squared_diff += pow((array[i] - mean_value), 2);
	}

	double variance = sum_squared_diff / size;
	return sqrt(variance);
}

template <class T>
int DataAnalysis<T>::mode(T* array, int size) {
	if (size == 1) {
		return array[0];
	}

	static int index = 0;
	static int max_count = 0;
	static T mode_value = array[0];

	if (index == size) {
		int temp_index = index;
		index = 0; 
		return mode_value;
	}

	int current_count = 0;
	for (int i = 0; i < size; i++) {
		if (array[index] == array[i]) {
			current_count++;
		}
	}

	if (current_count > max_count) {
		max_count = current_count;
		mode_value = array[index];
	}

	index++;
	return mode(array, size);
}

template<class T>
int DataAnalysis<T>::search(T* array, int size, int num) {
	if (array[size - 1] == num) {
		return (size - 1);
	}
	else {
		return search(array, size - 1, num);
	}
}

#endif