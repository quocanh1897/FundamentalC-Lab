#include <iostream>
#include <vector>
#include <cstdlib>
#include <iomanip>
using namespace std;
int main() {
	long long n;
	cout << "Nhap n nguyen duong: "; cin >> n;
	while (n <= 0) {
		while (!(cin.good())) {
			cin.clear(); cin.ignore(1000, '\n');
		}
		cout << "Nhap sai, nhap lai: "; cin >> n;
	}
	vector<double> diem(n);
	double sum = 0;
	for (double a : diem) {
		a = rand() % 1001 / 100.0;
		sum += a;
		cout << setprecision(2) << fixed << a << "; ";
	}
	cout << endl << "Trung binh: " << sum / n << endl;
	system("pause");
	
}