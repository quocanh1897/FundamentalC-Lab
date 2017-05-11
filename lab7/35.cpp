#include <iostream>
#include <ctime>
#include <random>
using namespace std;
int main() {
	unsigned long R, C;
	unsigned int tansuat[256] = {};
	cout << "Nhap kich thuoc Row, Column: ";
	cin >> R >> C;
	unsigned long **pic = new unsigned long *[R];
	for (int i = 0; i < R; i++) pic[i] = new unsigned long[C];
	srand(time(0));
	for (int i = 0; i < R; i++) {
		for (int j = 0; j < C; j++) {
			pic[i][j] = rand() % 256;
			tansuat[pic[i][j]]++;
		}
	}
	for (int i = 0; i < 256; i++) cout << tansuat[i] << endl;
	cin.get(); cin.get();

	for (int i = 0; i < R; i++)delete[] pic[i];
	delete[] pic;
}