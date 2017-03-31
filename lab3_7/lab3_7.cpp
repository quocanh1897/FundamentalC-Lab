#include<iostream>
#include<sstream>
#include<string>
using namespace std;
int main() {
	stringstream ss;
	string input;
	int v1, v2, result;
	char op;
	cout << "Nhap vao bieu thuc (value1 op value2): ";
	getline( cin,input,'\n');
	ss << input;
	ss >> v1 >> op >> v2;
	switch (op)
	{
	case '+': {
		result = v1 + v2; break;
	}
	case '-': {
		result = v1 - v2; break;
	}
	case '*': {
		result = v1*v2; break;
	}
	case '/': {
		result = v1 / v2; break;
	}
	}
	cout << result;
	system("pause");

}