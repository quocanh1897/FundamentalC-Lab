#include <iostream>
#include <cmath>
#include "Headerstr.h"
using namespace std;
int main() {
	int n;
	cout << "Nhap vao n: ";
	cin >> n; 
	cout <<  "so nguyen to tu 2 toi n gom: ";
	for (int i = 2; i < n; i++){
		if (isprime(i)){
			cout << i << " ";
			}
	} cout << endl;
	system("pause");

}
bool isprime(int n) {
	double r = sqrt(n);
	bool result = true;
	for (int trialfactor = 2 ; result && trialfactor <= r; trialfactor++){
		result = (n % trialfactor != 0);
	}
	return result;
}