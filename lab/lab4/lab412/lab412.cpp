#include<iostream>
using namespace std;
int main() {
	bool exit = 0;
	do {
	int choice;
	cout << "1. Nhap hang hoa" << endl
			<< "2. Tim hang hoa" << endl
			<< "3. In ra danh sach hang hoa" << endl
			<< "4. Xoa hang hoa" << endl
			<< "5. Cap nhat hang hoa" << endl
			<< "6. Luu du lieu" << endl
			<< "7. Tai du lieu" << endl
			<< "8. Thoat" << endl
			<< "Hay chon chuc nang: ";
		cin >> choice;
		while (!(choice >= 1 && choice <= 8)) {
			while (!cin.good()) {
				cin.clear(); cin.ignore(1000, '\n');
			}
			system("cls");
			 
			cout << "1. Nhap hang hoa" << endl
				<< "2. Tim hang hoa" << endl
				<< "3. In ra danh sach hang hoa" << endl
				<< "4. Xoa hang hoa" << endl
				<< "5. Cap nhat hang hoa" << endl
				<< "6. Luu du lieu" << endl
				<< "7. Tai du lieu" << endl
				<< "8. Thoat" << endl
				<< "Nhap lai: ";
			cin >> choice;
		}
		switch (choice)
		{
		case 1: cout << "Nhap hang hoa " << endl; break;
		case 2: cout << "Tim hang hoa " << endl; break;
		case 3: cout << "In ra danh sach hang hoa " << endl; break;
		case 4: cout << "Xoa hang hoa " << endl; break;
		case 5: cout << "Cap nhat hang hoa " << endl; break;
		case 6: cout << "Luu hang hoa " << endl; break;
	 	case 7: cout << "Tai hang hoa " << endl; break;
		case 8: cout << "Thoat ..." << endl; break;
		 
		}
		exit = 1;
	} while (exit == 0);
	
	system("pause");
}