#include <iostream>
using namespace std;
int main() {
	cout << "size of int: " << sizeof(int) << "size of int*: " << sizeof(int*) << endl
		<< "size of char: " << sizeof(char) << "size of char*: " << sizeof(char*) << endl
		<< "size of string: " << sizeof(string) << "size of string*: " << sizeof(string*) << endl
		<< "size of long double: " << sizeof(long double) << "size of long double*: " << sizeof(long double*) << endl;
	cin.get();
}