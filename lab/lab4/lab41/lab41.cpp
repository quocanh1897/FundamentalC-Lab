#include<iostream>
using namespace std;
int main() {
	char c;
	for (char i = '0'; i <= '9'; i++) cout << i << ": " << (int)i << endl;
	for (char i = 'a'; i <= 'z'; i++) cout << i << ": " << (int)i << endl; 
	for (char i = 'A'; i <= 'Z'; i++) cout << i << ": " << (int)i << endl;
	system("pause");
}