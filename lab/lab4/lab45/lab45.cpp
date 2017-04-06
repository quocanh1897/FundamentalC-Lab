#include <iostream>
#include <sstream>
#include <vector>
#include <cstdlib>
#include <string>
#include <iomanip>
using namespace std;
long long kiemtraN(string N) {
	stringstream ss;
	int    b, a = 0;
	long long n;
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
	long long n;
	string N;
	cout << "Nhap n nguyen duong: ";  getline(cin, N);
	n = kiemtraN(N);
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