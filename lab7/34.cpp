#include <iostream>
#define MAX 10
using namespace std;
int main() {
	int cnt = 0;
	double *arr = new double[MAX], ave = 0, dlc = 0;
	cout << "Nhap vao toi da MAX so: ";
	for (int i = 0; i < MAX; i++) {
		cin >> arr[i];
		if (arr[i] < 0) break;
		ave += arr[i];
		cnt++;
	}

	ave /= cnt;
	for (int i = 0; i < cnt; i++) dlc += (arr[i] - ave)*(arr[i] - ave);
	dlc = sqrt(dlc / (cnt - 1));
	cout << "trung binh day so: " << ave;
	cout << endl << "do lech chuan: " << dlc << endl;
	for (int i = 0, j = cnt - 1; i < j; i++, j--) {
		double t = arr[i];
		arr[i] = arr[j];
		arr[j] = t;
	}
	for (int i = 0; i < cnt; i++) cout << arr[i] << "    ";
	delete[] arr;
	cin.get(); cin.get();
}