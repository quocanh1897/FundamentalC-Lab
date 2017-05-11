#include <iostream>
#include <random>
#include <iomanip>
#define MAX 100
using namespace std;
int main() {
	cout << "Nhap kich thuoc ma tran: ";
	int N;
	cin >> N;
	while (N < 1 || N>100 || !cin.good()) {
		cin.clear(); cin.ignore(1000, '\n');
		cout << "Nhap lai: ";
		cin >> N;
	}
	int **matrix = new int *[N];
	for (int i = 0; i < N; i++) matrix[i] = new int[N];
	random_device rd;
	mt19937 rng(rd());
	uniform_real_distribution<double> dis(-40,50);
	cout << "Matrix truoc khi dao: " << endl;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			matrix[i][j] = dis(rng);
			cout << setw(6) << matrix[i][j];
		}
		cout << endl << endl;
	}
	cout << "Matrix sau khi dao: " << endl;
	for (int i = 0, j = N-1; i < j; i++, j--) {
		double temp = matrix[i][i];
		matrix[i][i] = matrix[j][j];
		matrix[j][j] = temp;
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			
			cout << setw(6) << matrix[i][j];
		}
		cout << endl << endl;
	}

	for (int i = 0; i < N; i++) delete[] matrix[i];
	delete[] matrix;
	cin.get(); cin.get();
}