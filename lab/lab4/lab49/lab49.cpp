#include <iostream>
#define e 0.0001
using namespace std;
long long gt(int n) {
	unsigned long long gt = 1;
	for (int j = 1; j <= n; j++) gt *= j;
	return gt;
}

int main() {
	long double x, xn=0, result=0;
	 
	cout << "Nhap vao x: "; cin >> x;// result = x;
	for (int n = 0;; n++) {
		
		
		xn = pow(-1, n)*pow(x, 2 * n + 1) / gt(2 * n + 1);
		result += xn;
		if (abs(xn) <= e) break;
	}
	cout << "sin(" << x << ") = " << result << endl;
	system("pause");
}