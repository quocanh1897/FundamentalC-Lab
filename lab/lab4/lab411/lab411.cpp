#include <iostream>
#include <vector>
using namespace std;
int main() {
	int n, x;
	
	cout << "Nhap vao bac cua da thuc: "; cin >> n;
	cout << "Nhap x: "; cin >> x;
	vector<int> a(n + 1);
	for (int i = 0; i <= n; i++) {
		cout << "Nhap he so x^" << i << ": "; cin >> a[i];
	}
	long xn = a[0], result = a[0];
	for (int j = 1; j <= n; j++) {
		for (int k = 1; k <= j; k++) x *= x;
		xn = x*a[j];
		result += xn;
	}
	cout << "Tong: " << result << endl;
	system("pause");
}