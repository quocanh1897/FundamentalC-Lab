#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	long n;
	cout << "Nhap vao chieu cao tam giac: "; cin >> n;
	cout << "Tam giac dac: " << endl;
	for (long i = 1; i <= n; i++) {
		for (long j = n - i; j > 0 ; j--) cout << " ";
		for (long k = 1; k < 2 * i ; k++) cout << "*";
		cout << endl;
	}
	cout << "Tam giac rong: " << endl;
	for (long i = 1; i <= n - 1; i++) cout << " "; cout << "*" << endl;
	for (long i = 2; i < n; i++) {
		for (long j = n - i; j > 0; j--) cout << " "; cout << "*";
		for (long k = 1; k < 2 * i-2; k++) cout << " ";
		cout << "*" <<  endl;
	}
	for (long i = 1; i <= 2 * n - 1; i++) cout << "*"; cout << endl;

	system("pause");
}