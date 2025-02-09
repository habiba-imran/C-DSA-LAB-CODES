//// -------------------------------------------------------------------
////                              EXAMPLE 1.1
//// -------------------------------------------------------------------
//#include<iostream>
//using namespace std;
//int Max1(int a, int b) {
//	return (a > b) ? a : b;
//}
//void Max2(int X, int Y, int& Larger) {
//	Larger = (X > Y) ? X : Y;
//}
//void Max3(int X, int Y, int* Larger) {
//	*Larger = (X > Y) ? X : Y;
//}
//int main() {
//	int a = 5, b = 6;
//	int larger = 7;
//	Max1(a, b);
//	Max2(a, b, larger);
//	Max3(a, b, &larger);
//}
//// -------------------------------------------------------------------
////                              EXAMPLE 1.2
//// -------------------------------------------------------------------
//#include<iostream>
//#include<math.h>
//#include<complex.h>
//using namespace std;
//class Complex {
//private:
//	float re, im;
//public:
//	Complex(float r, float i) : re(r), im(i) {}
//	Complex(float r) : re(r), im(0.0) {}
//	~Complex() {}
//	float Real() { return re; }
//	float Imag() { return im; }
//	double Magnitude() {
//		return sqrt(re * re + Imag() * Imag());
//	}
//
//	Complex operator +(Complex b) {
//		return Complex(re + b.re, im + b.im);
//	}
//	Complex operator =(Complex b) {
//		re = b.re;
//		im = b.im;
//		return*this;
//	}
//};
//int main() {
//	Complex a(1.0, 1.0);
//	Complex* b = new Complex(5.0);
//	Complex c(0, 0);
//	cout << "a real = " << a.Real() << " a imaginary = " << a.Imag() << endl;
//	cout << "b real = " << b->Real() << " b imaginary = " << b->Imag() << endl;
//	c = a + (*b);
//	cout << "c real = " << c.Real() << " c imaginary = " << c.Imag() << endl;
//	delete b;
//	return 0;
//}
//
//// -------------------------------------------------------------------
////                              EXERCISE 1.1
//// -------------------------------------------------------------------
//#include<iostream>
//using namespace std;
//class Complex {
//	int real, imaginary;
//public:
//	Complex(int r, int i) :real(r), imaginary(i) {}
//	Complex operator * (Complex c) {
//		int r = real * c.real - imaginary * c.imaginary;
//		int i = real * c.imaginary + imaginary * c.real;
//		return Complex(r, i);
//	}
//	~Complex() {}
//	void print() {
//		cout << "The product is: (" << real << ", " << imaginary << ")" << endl;
//	}
//};
//int main() {
//	Complex c1(12, 13);
//	Complex c2(14, 15);
//	Complex c3 = c1 * c2;
//
//}
//// -------------------------------------------------------------------
////                              EXAMPLE 1.3
//// -------------------------------------------------------------------
//#include<iostream>
//using namespace std;
//template<class T>T GetMax(T a, T b) {
//	return (a > b) ? a : b;
//}
//int main() {
//	int a = 5, b = 6;
//	long c = 7, d = 8;
//	int k = GetMax<int>(a, b);
//	int l = GetMax<long>(c, d);
//	cout << "max among a and b ints is: " << k << endl;
//	cout << "Max among c and d longs is: " << l << endl;
//	return 0;
//}
//EXAMPLE 1.4
//#include<iostream>
//using namespace std;
//template<class T>
//class myPair {
//	T a, b;
//public:
//	myPair(T first, T second) :a(first), b(second) {}
//	T getmax();
//};
//template <class T>
//T myPair<T>::getmax() {
//	return (a > b) ? a : b;
//}
//int main() {
//	myPair<int> myobject(200, 300);
//	cout << myobject.getmax();
//	return 0;
//}
//// -------------------------------------------------------------------
////                              EXAMPLE 1.4
//// -------------------------------------------------------------------
//#include<iostream>
//using namespace std;
//template<class T>
//class myPair {
//	T a, b;
//public:
//	myPair(T first, T second) :a(first), b(second) {}
//	T getmin();
//};
//template <class T>
//T myPair<T>::getmin() {
//	return (a < b) ? a : b;
//}
//int main() {
//	myPair<int> myobject(200, 300);
//	cout << myobject.getmin();
//	return 0;
//}
//// -------------------------------------------------------------------
////                              EXAMPLE 1.5
//// -------------------------------------------------------------------
//#include<iostream>
//using namespace std;
//template<class T, int N>
//class mySequence {
//	T memblock[N];
//public:
//	void setmember(int x, T value);
//	T getmember(int x);
//};
//
//template<class T, int N>
//void mySequence<T, N>::setmember(int x, T value) {
//	memblock[x] = value;
//}
//
//template<class T, int N>
//T mySequence<T, N>::getmember(int x) {
//	return memblock[x];
//}
//int main() {
//	mySequence<int, 5> myints;
//	mySequence<double, 5> myfloats;
//
//	myints.setmember(0, 100);
//	myfloats.setmember(3, 3.1416);
//
//	cout << myints.getmember(0) << endl;
//	cout << myfloats.getmember(3) << endl;

//}
//// -------------------------------------------------------------------
////                              EXERCISE 1.3
//// -------------------------------------------------------------------
//#include<iostream>
//using namespace std;
//template<class T, int N>
//class mySequence {
//	T memblock[N];
//public:
//	void setmember(int x, T value);
//	T getmember(int x);
//	T getmax();
//	T getmin();
//};
//
//template<class T, int N>
//void mySequence<T, N>::setmember(int x, T value) {
//	memblock[x] = value;
//}
//
//template<class T, int N>
//T mySequence<T, N>::getmember(int x) {
//	return memblock[x];
//}
//
//template<class T, int N>
//T mySequence<T, N>::getmin() {
//	T min = memblock[0];
//	for (int i = 0; i < 5; i++) {
//		if (memblock[i] < min) {
//			min = memblock[i];
//		}
//	}
//	return min;
//}
//
//template<class T, int N>
//T mySequence<T, N>::getmax() {
//	T max = memblock[0];
//	for (int i = 0; i < 5; i++) {
//		if (memblock[i] > max) {
//			max = memblock[i];
//		}
//	}
//	return max;
//}
//
//int main() {
//	mySequence<int, 5> myints;
//	mySequence<double, 5> myfloats;
//	int j = 0;
//	for (int i = 0; i < 5; i++) {
//		myints.setmember(i, j);
//		j++;
//	}
//	float k = 1.1;
//	for (int i = 0; i < 5; i++) {
//		myfloats.setmember(i, k);
//		k += 1;
//	}
//	cout << "INT ARRAY: ";
//	for (int i = 0; i < 5; i++) {
//		cout << myints.getmember(i) << "  ";
//	}
//	cout << endl << "FLOAT ARRAY: ";
//	for (int i = 0; i < 5; i++) {
//		cout << myfloats.getmember(i) << "  ";
//	}
//	cout << endl;
//
//	cout << "Minimum of ints is: " << myints.getmin() << endl;
//	cout << "Minimum of floats is: " << myfloats.getmin() << endl;
//
//	cout << "Maximum of ints is: " << myints.getmax() << endl;
//	cout << "Maximum of floats is: " << myfloats.getmax() << endl;
//
//}
//// -------------------------------------------------------------------
////                              EXAMPLE 1.6
//// -------------------------------------------------------------------
//#include<iostream>
//#include<fstream>
//using namespace std;
//int main() {
//	ofstream outfile("fout.txt");
//	ifstream infile("fin.txt");
//	char ch;
//	int count = 0;
//	while (infile.get(ch)) {
//		outfile << ch;
//		count++;
//	}
//	outfile << "Character count: " << count << endl;
//	infile.close();
//	outfile.close();
//	return 0;
//}
//// -------------------------------------------------------------------
////                              EXERCISE 1.4
//// -------------------------------------------------------------------
//#include<iostream>
//#include<fstream>
//using namespace std;
//int main() {
//	ifstream infile("fin.txt");
//	char ch;
//	int wordcount = 1;
//	int sentencecount = 0;
//	while (infile.get(ch)) {
//		if (ch == ' ') {
//			wordcount++;
//		}
//		if (ch == '.') {
//			sentencecount++;
//		}
//	}
//	cout << "Word count: " << wordcount << endl;
//	cout << "Sentence count: " << sentencecount << endl;
//	infile.close();
//	return 0;
//}
//EXAMPLE 1.7
//#include<iostream>
//#include<fstream>
//using namespace std;
//int main() {
//	float mdt1, mdt2, final, avg;
//	string name;
//	ofstream outfile("fout.txt");
//	ifstream infile("fin.txt");
//	while (infile >> mdt1 >> mdt2 >> final >> name) {
//		float avg = (mdt1 * 0.25) + (mdt2 * 0.25) + (final * 0.5);
//		outfile << "Data of " << name << ":" << endl;
//		outfile << "Midterm: " << mdt1 << ", " << mdt2 << endl;
//		outfile << "Final: " << final << endl;
//		outfile << "Average marks: " << avg << endl << endl;
//	}
//	outfile.close(); infile.close();
//}
//// -------------------------------------------------------------------
////                              EXERCISE 1.4
//// -------------------------------------------------------------------
//#include<iostream>
//#include<string>
//#include<fstream>
//#include<iomanip>
//using namespace std;
//class House {
//	string owner;
//	string address;
//	int bedrooms;
//	float price;
//public:
//	void readHouseData() {
//		cin.ignore();
//		cout << "Enter owner's name: ";
//		getline(cin, owner);
//		cout << "Enter owner's address: ";
//		getline(cin, address);
//		cout << "Enter number of bedrooms: ";
//		cin >> bedrooms;
//		cout << "Enter price: ";
//		cin >> price;
//	}
//	void displaydetails() {
//		cout << left << setw(15) << owner << setw(15) << address << setw(15) << bedrooms << setw(15) << price << endl;
//	}
//};
//int main() {
//	House available[100];
//	char choice;
//	int i = 0;
//	int num_houses;
//	cout << "Enter data for how many houses: ";
//	cin >> num_houses;
//	for (int i = 0; i < num_houses; i++) {
//		available[i].readHouseData();
//	}
//	cout << left << setw(15) << "Owner " << setw(15) << "Address" << setw(15) << "Bedrooms" << setw(15) << "Price" << endl;
//	for (int i = 0; i < num_houses; i++) {
//		available[i].displaydetails();
//	}
//}
//// -------------------------------------------------------------------
////                              EXERCISE 1.6
//// -------------------------------------------------------------------
//#include<iostream>
//#include<fstream>
//#include<iomanip>
//using namespace std;
//class Student {
//	string firstname, lastname;
//	int grades[10];
//public:
//	void readdata(ifstream& file, int numgrades) {
//		file >> firstname >> lastname;
//		for (int i = 0; i < numgrades; i++) {
//			file >> grades[i];
//		}
//	}
//	float ComputeAverage(int numgrades) {
//		int sum = 0;
//		for (int i = 0; i < numgrades; i++) {
//			sum += grades[i];
//		}
//		float average = float(sum) / numgrades;
//		return average;
//	}
//	void displaydata(int numgrades) {
//		cout << left << setw(15) << firstname << setw(15) << lastname << setw(15) << ComputeAverage(numgrades) << endl;
//	}
//	float getaverage(int numgrades) {
//		return ComputeAverage(numgrades);
//	}
//
//};
//int main() {
//	string filename;
//	Student student[10];
//	int numstudents, numgrades;
//	string fname, lname;
//
//	cout << "Which file do you want to open: ";
//	cin >> filename;
//	cout << endl;
//	ifstream file(filename);
//	if (!file) {
//		cout << "File does not exist";
//		exit(1);
//	}
//	file >> numstudents >> numgrades;
//
//	for (int i = 0; i < numstudents; i++) {
//		student[i].readdata(file, numgrades);
//	}
//	cout << left << setw(15) << "First Name" << setw(15) << "Last Name" << setw(15) << "Average" << endl;
//	for (int i = 0; i < numstudents; i++) {
//		student[i].displaydata(numgrades);
//	}
//	float highestaverage = student[0].getaverage(numgrades);
//	float lowestaverage = student[0].getaverage(numgrades);
//	float totalavg = 0;
//
//	for (int i = 0; i < numstudents; i++) {
//		if (student[i].getaverage(numgrades) > highestaverage) {
//			highestaverage = student[i].getaverage(numgrades);
//		}
//		if (student[i].getaverage(numgrades) < lowestaverage) {
//			lowestaverage = student[i].getaverage(numgrades);
//		}
//		totalavg += student[i].getaverage(numgrades);
//	}
//
//	float classavg = totalavg / numstudents;
//	cout << "\nClass Average is: " << classavg << endl;
//	cout << "\nLowest average in class is: " << lowestaverage << endl;
//	cout << "\nHighest average in class is: " << highestaverage << endl;
//
//	cout << "\nFollowing are the students with average less than class average: \n\n";
//	cout << left << setw(15) << "First Name" << setw(15) << "Last Name" << setw(15) << "Average" << endl;
//	for (int i = 0; i < numstudents; i++) {
//		if (student[i].getaverage(numgrades) < classavg) {
//			student[i].displaydata(numgrades);
//		}
//	}
//	return 0;
//}
//