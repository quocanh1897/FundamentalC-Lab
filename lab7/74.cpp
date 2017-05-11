#include <iostream>
using namespace std;
int main() {
	int arr[10] = { 10,20,30,40,50 }, *ptr;
	ptr = arr;
	cout << ptr[0] << endl << ptr[1] << endl << ptr[2] << endl << endl;
	ptr = &arr[0];
	cout << ptr[0] << endl << ptr[1] << endl << ptr[2] << endl << endl;
	ptr = &arr[2];
	cout << ptr[0] << endl << ptr[1] << endl << ptr[2] << endl << endl;
	cin.get();
}
