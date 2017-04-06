#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <cstdlib>
using namespace std;
long long kiemtraN(string N) {
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
	long long n; unsigned long long gt = 1;
	string N;
	cout << "Nhap n nguyen duong: "; getline(cin, N);
	n = kiemtraN(N);
	for (long long i = 1; i <= n; i++) gt *= i;
	cout << n << " giai thua= " << gt << endl;
	system("pause");
}