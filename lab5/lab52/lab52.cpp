#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#define SOCHIEU 50
#define PIchiaDEG 3.141592654/180
using namespace std;
struct VECTOR {
	double giatri[SOCHIEU];
	int chieu;
};
int main() {
	string s;
	stringstream ss;
	VECTOR inputvector[2];
	getline(cin, s); getline(cin, s); getline(cin, s);
	getline(cin, s);

	ss << s;
	int i1 = 0;
	while (!ss.fail()) {
		ss >> inputvector[0].giatri[i1];
		i1++;

	}
	inputvector[0].chieu = i1 - 1;
	ss.clear();
	getline(cin, s);

	ss << s;
	int i2 = 0;

	while (!ss.fail()) {
		ss >> inputvector[1].giatri[i2];
		i2++;

	}

	inputvector[1].chieu = i2 - 1;
	int chieu = i2 - 1;
	ss.clear();

	if (inputvector[0].chieu != inputvector[1].chieu) {
		cout << "2 vector k cung so chieu hoac nhap loi" << endl;
		return 0;
	}
	double dodaiv1 = 0, dodaiv2 = 0;
	for (int i = 0; i < chieu; i++) {

		dodaiv1 += inputvector[0].giatri[i] * inputvector[0].giatri[i];
	}
	dodaiv1 = sqrt(dodaiv1);
	for (int i = 0; i < chieu; i++) {

		dodaiv2 += inputvector[1].giatri[i] * inputvector[1].giatri[i];
	}
	dodaiv2 = sqrt(dodaiv2);
	 
	double tvh = 0;
	for (int i = 0; i < chieu; i++) {
		tvh += inputvector[0].giatri[i] * inputvector[1].giatri[i];
	}
	double goc;
	goc = acos(tvh / (dodaiv1*dodaiv2)) / PIchiaDEG;
	double hinhchieu = tvh / dodaiv2;
	cout << "do dai vector 1 va 2 lan luot la: " << dodaiv1 << " va "<< dodaiv2 << endl
		<< "tich vo huong v1*v2= " << tvh << endl
		<< "goc giua 2 vector= " << goc << " (do)" << endl
		<< "hinh chieu a len b: " << hinhchieu << endl;
}