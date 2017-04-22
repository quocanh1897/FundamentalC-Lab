#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <vector>
#include <array>
#define MAXLENGTH 20000;
using namespace std;
int main(){
//LOAD PARAM
	string str;
	string str_value;
	double num_iterations, learning_rate, start_a, start_b, num_folds;
	getline(cin, str); getline(cin, str); getline(cin, str); //skip ---
	getline(cin, str); 	stringstream scin1(str);
	scin1 >> str_value >> num_iterations;  
	getline(cin, str); stringstream scin2(str);
	scin2 >> str_value >> learning_rate;
	getline(cin, str); stringstream scin3(str);
	scin3 >> str_value >> start_a;
	getline(cin, str); stringstream scin4(str);
	scin4 >> str_value >> start_b;
	getline(cin, str); stringstream scin5(str);
	scin5 >> str_value >> num_folds;
	getline(cin, str); getline(cin, str); getline(cin, str);//skip ---
//LOAD DATA x, t
	double  x[20000], t[20000];
	string s;
	int n = 0;
	while (!cin.eof()) {
		getline(cin, s);
		istringstream ss(s);
		ss >> x[n] >> t[n];
		n++;
	}
	int M = n , K = num_folds;
	int D = M / K;
	cout << "___________________________________________________________________________________________" << endl
		 << "Output of the validation" << endl
		 << "___________________________________________________________________________________________" << endl;
	vector<double> y(M);
//TINH TOAN SO LIEU
	for (int k = 1; k <= K; k++) {//chay K lan lap de tinh TST, TSN
		int TST0 = D*(k - 1), TSTend = D*k - 1;
		if (k == K) TSTend = M - 1;
		double a = start_a, b = start_b;//khoi tao P0(a,b)
		double  grad_a = 0, grad_b = 0;
		for (int j = 1; j <= num_iterations; j++) {//so vong lap de tinh tren tap TRN
			for (int i = 0; i < M; i++) {//duyet tung ptu cua ab[][], tinh gradient
				if (i<TST0 || i>TSTend) {
					y[i]=(a * x[i] + b);
					grad_a += (a * x[i] + b - t[i])*x[i];
					grad_b += (a * x[i] + b - t[i]);
				}
			}
			double ga = grad_a, gb = grad_b;
			grad_a /= sqrt(ga*ga + gb*gb);//chuan hoa gradient
			grad_b /= sqrt(ga*ga + gb*gb);
			a -= learning_rate*grad_a;//cap nhat a, b
			b -= learning_rate*grad_b; 
		}
		double Ermsd = 0, etb = 0, sigma = 0;
		vector<double> e(M);
//tinh Ermsd trong tap TST (chi so tu TST0->TSTend)
		for (int f = TST0; f <= TSTend; f++) Ermsd += (a*x[f] + b - t[f])*(a*x[f] + b - t[f]);
		Ermsd = sqrt(Ermsd / D);
//khoi tao gia tri cua ei		
		for (int f = 0; f < M; f++) e[f] = a*x[f] +b- t[f]; 
//tinh etb cho tung tap TST, 		 
		for (int f = TST0; f <= TSTend; f++) etb += e[f];
		etb /= D;
//tinh sigma cho tung tap TST,
		for (int f = TST0; f <= TSTend; f++) sigma += (e[f] - etb)*(e[f] - etb);		
		sigma = sqrt(sigma / D);
		double Vmin = etb - 3 * sigma, Vmax = etb + 3 * sigma;
		double LL = (Vmax - Vmin) / 10, L[11];
		for (int f = 0; f < 11; f++) L[f] = Vmin + f*LL;
		double tansuate[10] = {};
		for (int f = TST0; f <= TSTend; f++) {
			if (L[0] <= e[f] && e[f] < L[1]) tansuate[0]++;
			else if (L[1] <= e[f] && e[f] < L[2]) tansuate[1]++;
			else if (L[2] <= e[f] && e[f] < L[3]) tansuate[2]++;
			else if (L[3] <= e[f] && e[f] < L[4]) tansuate[3]++;
			else if (L[4] <= e[f] && e[f] < L[5]) tansuate[4]++;
			else if (L[5] <= e[f] && e[f] < L[6]) tansuate[5]++;
			else if (L[6] <= e[f] && e[f] < L[7]) tansuate[6]++;
			else if (L[7] <= e[f] && e[f] < L[8]) tansuate[7]++;
			else if (L[8] <= e[f] && e[f] < L[9]) tansuate[8]++;
			else if (L[9] <= e[f] && e[f] <= L[10]) tansuate[9]++;
		}
		double tongts = 0;
		for (int f = 0; f < 10; f++) tongts += tansuate[f];
		for (int f = 0; f < 10; f++) tansuate[f] /= tongts;
//IN KET QUA		
		cout << setprecision(3) << fixed << setw(7) << a << setw(7) << b << setw(7) << Ermsd ;
		for (int f = 0; f < 10; f++) cout << setprecision(3) << fixed << setw(7) << tansuate[f];
		cout << endl;
	}
	return 0;
}