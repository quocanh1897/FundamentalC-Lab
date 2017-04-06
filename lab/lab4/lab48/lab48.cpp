#include <iostream>
#include <sstream>
#include <string>
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
	int n; string N;
	cout << "Nhap n khong am: "; getline(cin, N);
	n = kiemtraN(N);
	if (n == 0) cout << "F(0) = 1";
	else {
		int preprevious = 0, previous = 1, current;

		for (int i = 1; i <= n; i++) {
			current = preprevious + previous;
			preprevious = previous;
			previous = current;
		}
		cout << "F(" << n << ") = " << current << endl;
	}
	
	system("pause");
}