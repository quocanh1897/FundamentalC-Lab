#include <iostream>
#include <cstdlib>
#include <sstream>
#include <ctime>
#include <string>
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
	 
	string N;
	cout << "Nhap n nguyen duong: "; getline(cin, N);
	int n = kiemtraN(N);
	srand(time(0));
	for (int i = 0; i < n; i++) {
		cout << setprecision(2) << fixed << rand() % 1001 / 100.0 << " ";
	}
	system("pause");
}