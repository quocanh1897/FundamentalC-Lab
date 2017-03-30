#include <iostream>
#include <vector>
using namespace std;
typedef unsigned char uchar;
vector<uchar> tinhDMKH(uchar, uchar, uchar, uchar, uchar, vector<uchar>);
vector<uchar> tinhSLKH(vector<uchar> , long long , long long );
int main() {
	uchar dd1, dd2, mm1, mm2, yy1, yy2, h;
	long long cs1, cs2;
	cout << "Nhap vao dd:mm:yy cua thang trc: "; cin >> dd1 >> mm1 >> yy1;
	cout << "Nhap vao chi so dien thang trc: "; cin >> cs1;
	cout << "Nhap vao dd:mm:yy cua thang nay: "; cin >> dd2 >> mm2 >> yy2;
	cout << "Nhap vao chi so dien thang nay: "; cin >> cs2;
	cout << "Nhap vao so ho dung chung dien: "; cin >> h;
	vector<double> DG{ 1.484, 1.533, 1.786,2.242,2.503,2.587 };
	vector<uchar> DMCB{ 50,50,100,100,100 }, DMKH = tinhDMKH(dd1, mm1, dd2, mm2, h, DMCB), SLKH = tinhSLKH(DMKH, cs1, cs2);
	cout << SLKH[3];
	system("pause");
	
}
vector<uchar> tinhDMKH(uchar dd1, uchar mm1, uchar dd2, uchar mm2, 
	uchar h, vector<uchar> DMCB) {
	vector<uchar> DMKH;
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
	for (int i = 0; i < DMCB.size(); i++) {

		DMKH[i] = DMCB[i] * (N /T)*h;
	}
	return DMKH;

}
vector<uchar> tinhSLKH(vector<uchar> DMKH, long long cs1, long long cs2) {
	vector<uchar> SLKH(6);
	long long cs = cs2 - cs1;
	for (int i = 0; i < 6;i++) {
		uchar sum = 0;
		if (cs - sum >= 0) SLKH[i] = DMKH[i];
		sum += DMKH[i];
	}
	return SLKH;
}