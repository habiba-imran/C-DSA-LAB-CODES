//// -------------------------------------------------------------------
////                              EXAMPLE 3.1
//// -------------------------------------------------------------------
//#include<iostream>
//using namespace std;
//int Factorial(int n) {
//	if (n <= 1) { return 1; }
//	else return (n * Factorial(n - 1));
//}
//int main() {
//	cout << "Factorial of 5: " << Factorial(5);
//}
//// -------------------------------------------------------------------
////                              EXAMPLE 3.2
//// -------------------------------------------------------------------
//#include<iostream>
//using namespace std;
//void rev() {
//	char ch;
//	cin.get(ch);
//	if (ch != '\n') {
//		rev();
//		cout.put(ch);
//	}
//}
//int main() {
//	rev();
//}
//// -------------------------------------------------------------------
////                              EXAMPLE 3.3
//// -------------------------------------------------------------------
//#include<iostream>
//using namespace std;
//int Power(int X, int N) {
//	if (N == 0) {
//		return 1;
//	}
//	else {
//		return (X * Power(X, N - 1));
//	}
//}
//int main() {
//	cout << "3^4: " << Power(3, 4);
//}
//// -------------------------------------------------------------------
////                              EXERCISE 3.1
//// -------------------------------------------------------------------
//#include<iostream>
//#include<iomanip>
//using namespace std;
//int Power(int X, int N) {
//	if (N == 0) { return 1; }
//	int x = (X * Power(X, N - 1));
//	cout << X << setw(15) << N << setw(15) << x << endl;
//	return x;
//}
//int main() {
//	cout << "Printing 2 till 2 ^ 10: \n\n";
//	cout << "X" << setw(15) << "N" << setw(15) << "ANSWER" << endl;
//	int result = Power(2, 10);
//}
//// -------------------------------------------------------------------
////                       EXAMPLE 3.4, EXERCISE 3.2
//// -------------------------------------------------------------------
//#include<iostream>
//using namespace std;
//int Ackermann(int M, int N) {
//	if (M == 0) {
//		return N + 1;
//	}
//	else if (M > 0 && N == 0) {
//		return Ackermann(M - 1, 1);
//	}
//	else if (M > 0 && N > 0) {
//		return Ackermann(M - 1, Ackermann(M, N - 1));
//	}
//}
//int main() {
//	cout << Ackermann(3, 4);
//}
//// -------------------------------------------------------------------
////                            EXERCISE 3.3 (a)
//// -------------------------------------------------------------------
//#include<iostream>
//using namespace std;
//int PrintNumbers(int N) {
//	if (N <= 0) { return 0; }
//	else {
//		cout << N << " ";
//		return PrintNumbers(N - 1);
//	}
//}
//int main() {
//	cout << PrintNumbers(10);
//}
// //// -------------------------------------------------------------------
////                            EXERCISE 3.3 (b)
//// -------------------------------------------------------------------
//#include<iostream>
//using namespace std;
//int binomialCoeff(int N, int K) {
//	if (N == K || K == 0) {
//		return 1;
//	}
//	else
//		return (binomialCoeff(N - 1, K - 1) + binomialCoeff(N - 1, K));
//}
//int main() {
//	cout << binomialCoeff(5, 2);
//}
//// -------------------------------------------------------------------
////                            EXERCISE 3.3 (c)
//// -------------------------------------------------------------------
//#include<iostream>
//using namespace std;
//bool checkDivisibility(int num, int i);
//bool isPrime(int num) {
//	if (num <= 1) {
//		return false;
//	}
//	else if (num % 2 == 0) {
//		return false;
//	}
//	else
//		return checkDivisibility(num, 3); // start checking divisibility from 3 as 2 alr checked.
//}
//bool checkDivisibility(int num, int i) {
//	if (i == num) {
//		return true;
//	}
//	else if (num % i == 0) {
//		return false;
//	}
//	else {
//		return checkDivisibility(num, i + 2);
//	}
//}
//int main() {
//	int num;
//	cout << "Enter a number: ";
//	cin >> num;
//	if (isPrime(num))
//		cout << num << " is a prime number. ";
//	else
//		cout << num << " is not a prime number. ";
//}
