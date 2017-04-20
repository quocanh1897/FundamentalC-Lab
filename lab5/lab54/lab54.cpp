#include <iostream>
#include <cstdlib>
#include <ctime>
#define MAXVERT 10
#define canh(a, b, c, d) sqrt(((a)-(c))*((a)-(c))+((b)-(d))*((b)-(d)))
using namespace std;
struct dinh {
	double x;
	double y;
};
int main() {
	dinh dinh[MAXVERT];
	int N;
	cout << "Nhap so dinh N: "; cin >> N;
	while (!cin.good() || N <= 2 || N > MAXVERT) {
		cout << "Nhap lai: "; 
		cin.clear(); cin.ignore(1000, '\n');
		cin >> N;
	}
	srand(time(0));
	for (int i = 0; i < N; i++)	{
		dinh[i].x = ((100 - -100)*((double)rand() / RAND_MAX)) - 100;
		dinh[i].y = ((100 - -100)*((double)rand() / RAND_MAX)) - 100;
		cout << "(" << dinh[i].x << ";" << dinh[i].y << ")" << endl;
	}
	double chuvi = 0;
	for (int i = 0; i <= (N - 2); i++)	{
		chuvi += canh(dinh[i].x, dinh[i].y, dinh[i + 1].x, dinh[i + 1].y);
	}
	cout << "chu vi da giac: " << chuvi << endl;

	system("pause");
}