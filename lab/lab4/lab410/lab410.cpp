#include <iostream>
#include <iomanip>
#define e 10e-10
using namespace std;
long double sinx(double x) {
	long double xn = x, result = x;
	for (int n = 1;; n++) {
		xn *= (-1 * x*x) / ((2 * (n - 1) + 2)*(2 * (n - 1) + 3));
		result += xn;
		if (abs(xn) <= e) break;
	}
	return result;
}
long double cosx(double x) {
	long double xn = 1, result = 1;
	for (int n = 1;; n++) {
		xn *= -1*x*x / ((2 * (n - 1) + 1)*(2 * (n - 1) + 2));
		result += xn;
		if (abs(xn) <= e) break;
	}
	return result;
}
long double lnxfrac2(double x) {
	long double x0 = 1 - 2 / (x + 1), result = x0, xn=x0;
	for (int n = 1;; n++) {
		xn = xn*x0*x0*(2 * n - 1) / (2 * n + 1);
		result += xn;
		if (abs(xn) <= e) break;
	}
	return result;
}
int main() {
	double x;
	cout << "Nhap vao x(do): "; cin >> x;
	cout << "sin(" << x << ")= " << setprecision(10) << sinx(x *3.141592654 / 180) << endl
	 << "cos(" << x << ")= " << setprecision(10) << cosx(x *3.141592654 / 180) << endl
	 << "ln(" << x << ")= " << setprecision(10) << 2*lnxfrac2(x) << endl
	 << "tan(" << x << ")= " << setprecision(10) << sinx(x *3.141592654 / 180)/cosx(x *3.141592654 / 180) << endl;
	system("pause");
}