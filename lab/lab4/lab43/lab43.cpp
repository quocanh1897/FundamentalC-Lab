#include <iostream>
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
	unsigned long sum = 0;
	for (int i = 1; i <= n; i+=2) sum += i*i;
	cout << "Tong binh phuong cac so le tu 1 toi " << n << " la: " << sum << endl;
	system("pause");
}