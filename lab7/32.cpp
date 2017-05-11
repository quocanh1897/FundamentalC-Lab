#include <iostream>
#include <random>
using namespace std;
int main() {
	int N;
	cout << "Nhap chieu dai vector: ";
	cin >> N;
	double *vector1 = new double[N], *vector2 = new double[N];
	random_device rd;
	mt19937 rng(rd());
	uniform_real_distribution<double> d(-10, 10);
	for (int i = 0; i < N; i++) {
		vector1[i] = d(rng);
		vector2[i] = d(rng);
	}
	double length1 = 0, length2 = 0, produce = 0;
	for (int i = 0; i < N; i++) {
		length1 += vector1[i] * vector1[i];
		length2 += vector2[i] * vector2[i];
		produce += vector1[i] * vector2[i];
	}
	length1 = sqrt(length1);
	length2 = sqrt(length2);
	cout << "do dai vector1: " << length1 << "; do dai vector2: " << length2;
	cout << endl << "tich vo huong: " << produce;
	delete[] vector1;
	delete[] vector2;
	vector1 = NULL; vector2 = NULL;
	cin.get(); cin.get();
}