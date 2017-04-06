#include <string>
#include <sstream>
#include <iostream>
using namespace std;
int main() {

	string input; stringstream ss;
	int n; bool sai = 0;
	cout << "Nhap n nguyen duong: "; getline(cin, input);
A:
	for (char c : input) {
		if (!(c >= '0'&&c <= '9')) {
			sai = 1; break;
		}
		else sai = 0;
	}
	ss << input; ss >> n;
	while (n <= 0 || sai) {
		while (!(cin.good())) {
			cin.clear(); cin.ignore(1000, '\n');
		}
		cout << "Nhap sai, nhap lai: "; cin >> input; goto A;
	}
	cout << "so vua nhap: " << input << endl;


	system("pause");


}