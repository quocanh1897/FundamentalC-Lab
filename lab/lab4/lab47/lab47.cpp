#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
using namespace std;
int kiemtraN(string N) {
	stringstream ss;
	int  n, b, a = 0;
	do {
		b = 0, a = N.size();
		while (N[0] == 32) N.erase(0, 1);

		for (int j = 0; j < a; j++)
			if (48 <= N[j] && N[j] <= 57 || N[a - 1] == 32) b++;

		if (b != a) {
			cout << "Nhap lai N:";
			getline(cin, N);
		}
	} while (b != a);
	ss << N; ss >> n;
	return n;
}
int main() {
	long n;
	string N;
	cout << "Nhap vao chieu cao tam giac: "; getline(cin, N);
	n = kiemtraN(N);
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