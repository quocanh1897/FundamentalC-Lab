#include <iostream>
using namespace std;
int main() {
	int n;
	cout << "Nhap n khong am: "; cin >> n;
	while (n < 0) {
		while (!(cin.good())) {
			cin.clear(); cin.ignore(1000, '\n');
		}
		cout << "Nhap sai, nhap lai: "; cin >> n;
	}
	int preprevious = 0, previous = 1, current;
	
	for (int i = 1; i <= n ; i++) {
		current = preprevious + previous;
		preprevious = previous;
		previous = current;
	}
	cout << "F(" << n << ")= " << current << endl;
	system("pause");
}