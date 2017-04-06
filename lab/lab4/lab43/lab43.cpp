#include <string>
#include <sstream>
#include <iostream>
using namespace std;
int main() {
	string N;
	stringstream ss;
	int n, b, a = 0;
	cout << "Nhap n nguyen duong: "; getline(cin, N);
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
	unsigned long sum = 0;
	for (int i = 1; i <= n; i+=2) sum += i*i;
	cout << "Tong binh phuong cac so le tu 1 toi " << n << " la: " << sum << endl;
	system("pause");
}