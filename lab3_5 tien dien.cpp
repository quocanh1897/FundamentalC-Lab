#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;
typedef unsigned int uchar;

int main() {
	uchar dd1, dd2, mm1, mm2, h;
	long cs1, cs2;
	cout << "Nhap vao dd:mm:yy cua thang trc: "; cin >> dd1 >> mm1;
	cout << "Nhap vao chi so dien thang trc: "; cin >> cs1;
	cout << "Nhap vao dd:mm:yy cua thang nay: "; cin >> dd2 >> mm2;
	cout << "Nhap vao chi so dien thang nay: "; cin >> cs2;
	cout << "Nhap vao so ho dung chung dien: "; cin >> h;
	//dd1 = 11; mm1 = 1; dd2 = 3; mm2 = 2; cs1 = 1000; cs2 = 1236,h=1;
	vector<double> DG{ 1.484, 1.533, 1.786,2.242,2.503,2.587 };
	vector<uchar> DMCB{ 50,50,100,100,100 }, DMKH(5);
	//TINH DMKH	
	uchar N, T;
	if (mm1 == 2) {
		N = 29 - dd1 + dd2; T = 28;
	}
	else if (mm1 == 4 || mm1 == 6 || mm1 == 9 || mm1 == 11) {
		N = 31 - dd1 + dd2; T = 30;
	}
	else {
		N = 32 - dd1 + dd2; T = 31;
	}
	for (int i = 0; i < 5; i++) {

		DMKH[i] = DMCB[i] * ((double)N / T)*h + 0.5;
	}
	//TINH SLKH
	vector<uchar> SLKH(6);
	int cs = cs2 - cs1,sum=0;
	for (int i = 0; i < 5; i++) {
		sum += DMKH[i];
		if (cs>=DMKH[i]) SLKH[i] = DMKH[i];
		else SLKH[i] = max(0,cs);
		cs -= DMKH[i];
	}
	//TINH TIEN
	vector<double> TIEN(6);
	double ttien = 0;
	for (int i = 0; i < 6; i++) {
		TIEN[i] = SLKH[i] * DG[i];
		ttien += TIEN[i];
	}
	//IN HOA DON
	
	cout << endl << setw(4) <<left<< "STT" << setw(6) <<left<< "Gia" << setw(7) <<left<< "DMCB" << setw(7)<<left
		<< "DMKH" << setw(7) <<left<< "SLKH" << setw(10) <<left<< "TIEN" << endl;
	for (int i = 0; i < 5; i++) {
		cout << setw(4) <<left<< i+1 << setw(6) <<left<< DG[i] << setw(7) <<left<< DMCB[i] << setw(7)
			<<left<< DMKH[i] << setw(7) <<left<< SLKH[i] << setw(10) <<left<< TIEN[i] << endl;
	}
	cout << setw(4) << left << 6 << setw(6) << left << DG[5] << setw(7) << left << "conlai" << setw(7)
		<< left << "conlai" << setw(7) << left << SLKH[5] << setw(10) << left << TIEN[5] << endl;
	cout << setw(24) <<" "<<setw(4)<< left << cs2-cs1 << setw(3)<<left<<"kWh"<< setw(10) << left << ttien << endl;
	cout << "Thue GTGT 10%:" << setw(17) << " " << 0.1*ttien << endl
		<< "TONG CONG:" << setw(21) << " " << setw(10) << left << ttien*1.1 << endl;
	system("pause");
	
}
//vector<uchar> tinhDMKH(uchar dd1, uchar mm1, uchar dd2, uchar mm2, 
//	uchar h, vector<uchar> DMCB) {
//	vector<uchar> DMKH;
//	uchar N, T;
//	if (mm1 == 2) {
//		N = 29 - dd1 + dd2; T = 28;
//	}
//	else if (mm1 == 4 || mm1 == 6 || mm1 == 9 || mm1 == 11) { 
//		N = 31 - dd1 + dd2; T = 30; 
//	}
//	else {
//		N = 32 - dd1 + dd2; T = 31;
//	}
//	for (int i = 0; i < DMCB.size(); i++) {
//
//		DMKH[i] = DMCB[i] * (N /T)*h;
//	}
//	return DMKH;
//
//}
//vector<uchar> tinhSLKH(vector<uchar> DMKH, long long cs1, long long cs2) {
//	vector<uchar> SLKH(6);
//	long long cs = cs2 - cs1;
//	for (int i = 0; i < 6;i++) {
//		uchar sum = 0;
//		if (cs - sum >= 0) SLKH[i] = DMKH[i];
//		sum += DMKH[i];
//	}
//	return SLKH;
//}