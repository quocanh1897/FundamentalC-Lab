#include <iostream>
#include <random>
#include <iomanip>
using namespace std;
int main() {
	int N;
	cout << "Nhap chieu dai vector: ";
	cin >> N;
	int **matrix = new int *[N];
	for (int i = 0; i < N; i++) matrix[i] = new int [N];
	random_device rd;
	mt19937 rng(rd());
	uniform_int_distribution<int> dis(-40, 50);
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++) matrix[i][j] = dis(rng);
	cout << "Matrix tam giac duoi: " << endl;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (i > j) cout << setw(6) << "0";
			else cout << setw(6) << matrix[i][j];
		}
		cout << endl << endl;
	}
	cout << "Matrix tam giac tren: " << endl;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (i < j) cout << setw(6) << "0";
			else cout << setw(6) << matrix[i][j];
		}	
		cout << endl << endl;
	}
	for (int i = 0; i < N; i++) delete[] matrix[i];
	delete[] matrix;
	cin.get(); cin.get();
}