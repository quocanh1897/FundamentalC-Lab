#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main(){
	int i = 3, a, k, b = 1;
	string N;
	cout << "Nhap vao chuoi:";
	getline(cin, N);
	while (N[0] == 32)  N.erase(0, 1);
	while (N[N.size() - 1] == 32) N.erase(N.size() - 1, 1);
	k = N.size();
	/*if (k == 1 || k == 2 || k == 3) b = 1;
	else*/
		while (i <= k)	{
			if (N[i - 2] == 32 && N[i - 1] == 32){
				N.erase(i - 2, 1);
				k = N.size();
				i = 3;
			}
			else i++;
		}
	cout << N << endl;
	system("pause");
	return 0;
}
