#include <iostream>
#include <iomanip>
#define e 10e-10
using namespace std;

int main() {
	long double x, xn, result;
	cout << "Nhap vao x(do): "; cin >> x; 
	x *= 3.141592654 / 180;
	xn = x; result = x;
	for (int n = 1;; n++) {
		xn *= (-1 * x*x) / ((2 * (n - 1) + 2)*(2 * (n - 1) +3));
		result += xn;
		if (abs(xn) <= e) break;
	}
	cout << "sin(" << x << ") = " << setprecision(10) <<  result << endl;
	system("pause");
}