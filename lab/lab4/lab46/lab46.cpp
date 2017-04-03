#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;
int main() {
	long long n, gt = 1;
	cout << "Nhap n nguyen duong: "; cin >> n;
	while (n <= 0) {
		while (!(cin.good())) {
			cin.clear(); cin.ignore(1000, '\n');
		}
		cout << "Nhap sai, nhap lai: "; cin >> n;
	}
	for (long long i = 1; i <= n; i++) gt *= i;
	cout << n << " giai thua= " << gt << endl;
	system("pause");
}