#include <iostream>
#include <string>

using namespace std;

int main() {
	string a;
	char c;
	getline(cin, a);
	cout << "chuoi ban dau: " << a << endl;
	for (int i = 0, j = a.size()-1; i < j; i++, j--) {
		a[i] = a[i] + a[j];
		a[j] = a[i] - a[j];
		a[i] -= a[j];
	}
	cout << "chuoi dao nguoc: " << a << endl;
	system("pause");
}
