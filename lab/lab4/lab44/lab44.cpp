#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
int main() {
	int n;
	cout << "Nhap n nguyen duong: "; cin >> n;
	while (n <= 0) {
		while (!(cin.good())) {
			cin.clear(); cin.ignore(1000, '\n');
		}
		cout << "Nhap sai, nhap lai: "; cin >> n;
	}
	for (int i = 0; i < n; i++) {
		cout << setprecision(2) << fixed << rand() % 1001 / 100.0 << " ";
	}
	system("pause");
}