//#include <iostream>
#define MAX 100
using namespace std;
struct mayin {
	string name;
	string weight;
	int tocdo;
	string type;
};
struct monhoc {
	string ten;
	int tinchi;
	int sotiet;
	bool thinghiem;
};
struct doanhnghiep {
	string ten;
	int von;
	string linhvuc;
	int nhanvien;
};
struct conchim {
	string ten;
	int nang;
	int cao;
	string mau;
};
int main() {
	mayin company1[MAX];
	company1[2] = {
		"BROTHER",
		"10",
		20,
		"A4,A3"
	};
	company1[55] = company1[2];
	monhoc giaitich[MAX];
	giaitich[2] = {
		"giai tich ",
		4,
		75,
		1
	};
	giaitich[3] = giaitich[2];
	doanhnghiep tphcm[MAX];
	tphcm[2] = {
		"aaa ",
		40,
		"bds",
		1000
	};
	tphcm[3] = tphcm[2]; 
	conchim se[MAX];
	se[2] = {
		"chim se ",
		4,
		75,
		"do"
	};
	se[3] = se[2];
	system("pause");
}