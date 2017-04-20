#include <iostream>
#include <iomanip>
#define MAXSIZE 10
using namespace std;
int main() {
	double input[MAXSIZE], tb = 0, sum = 0, dlc = 0, t = 0;
	int b = 0;
	cout << "Nhap day so thuc k am: ";
	for (int i = 0; i < MAXSIZE; i++) {
		cin >> input[i];
		if (!cin.good()||input[i]<=0) {
			cout << "Nhap loi" << endl;
			return 0;
		}
		b = i;
	}
	for (int i = 0; i <= b; i++) {
		tb = tb + input[i] / (b + 1);
	}
	for (int i = 0; i <= b; i++) {
		sum = sum + (input[i] - tb)*(input[i] - tb);
	}

	dlc = sqrt(sum / b);
	cout << "Trung binh cong la: " << tb << endl 
		<< "Do lech chuan la: " << tb << endl;
	for (int i = 0; i < (b + 1) / 2; i++)
	{
		t = input[i];
		input[i] = input[b - i];
		input[b - i] = t;
	}
	cout << "Chuoi dao nguoc la: ";
	for (int i = 0; i <= b; i++) cout << input[i] << " ";
	cout << endl;
	system("pause");
	return 0;
}

	 