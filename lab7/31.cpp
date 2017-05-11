#include <iostream>
#define N 10
using namespace std;
int main() {
	int vector1[N], vector2[N], *ptr1, *ptr2;
	ptr1 = vector1;
	ptr2 = vector2;
	int n;
	cout << "so chieu N: "; cin >> n;
	cout << "nhap vector1: ";
	for (int i = 0; i < n; i++) {
		cin >> ptr1[i];
	}
	cout << "nhap vector2: ";
	for (int i = 0; i < n; i++) {
		cin >> ptr2[i];
	}
	double length1 = 0, length2 = 0, produce = 0;
	for (int i = 0; i < n; i++) {
		length1 += ptr1[i] * ptr1[i];
		length2 += ptr2[i] * ptr2[i];
		produce += ptr1[i] * ptr2[i];
	}
	length1 = sqrt(length1);
	length2 = sqrt(length2);
	cout << "do dai vector1: " << length1 << "; do dai vector2: " << length2;
	cout << endl << "tich vo huong: " << produce;
	cin.get(); cin.get();
}