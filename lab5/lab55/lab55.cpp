#include <iostream>
#include <sstream>
#include <string>
#define M 100
#define N 100
using namespace std;
int main() {
	string str;
	stringstream ss;

	double vectorX[M];
	double matrixW[N][M];
	getline(cin, str);
	ss << str;
	int i = 1;
	ss >> vectorX[0];
	while (!ss.fail()) {
		ss >> matrixW[0][i];
		i++;
	}
	int socotW = i - 2;
	ss.clear();

	
	int sohang = 1;
	while (!ss.fail()) {
		ss.clear();

		getline(cin, str); 
		ss << str;
		int k = 1;
		ss >> vectorX[sohang];
		while (!ss.fail())	{
			ss >> matrixW[sohang][k];
			k++;
		} 
		if (k != i) {
			cout << "ERROR" << endl;
			return 0;
		}
		sohang++;
		
	}

	cout << vectorX[2];
	
	
	 
}