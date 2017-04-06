#include <string>
#include <iostream>
using namespace std;
int main(){
	string N;
	int b = 0, a = 0, c = 0;
	cout << "Nhap n nguyen duong: ";
	getline(cin, N);
	do	{
		b = c; a = N.size();
		while (N[0] == 32) N.erase(0, 1);
		
		for (int j = 0; j < a; j++) {
			if (48 <= N[j] && N[j] <= 57 || N[a-1]==32) b++;
		}
		if (b != a)	{
			cout << "Nhap lai N:";
			getline(cin, N);
		}
	} while (b != a);
	cout << N << endl ;
	system("pause");
	
}
