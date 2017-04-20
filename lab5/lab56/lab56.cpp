#include <iostream>
#include <string>
using namespace std;
int main() {
	int i = 0;
	string s;
	getline(cin, s);
	for (char c : s) {
		if (c = '\0') break;
		else i++;
	}
	cout << i;

	system("pause");
}