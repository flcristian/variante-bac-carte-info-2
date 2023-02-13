#include <iostream>
#include <string>
#include <fstream>

using namespace std;

// Subiectul 1

// Problema 4

int x[101]{}, a[101] = { 10,20,30,40 };
int n = 4, s=0, Suma = 100;

void tipar(int k) {
	for (int i = 1; i <= k; i++) {
		if (x[i] > 0) {
			cout << x[i] << "*" << a[i] << " ";
		}
	}
	cout << endl;
}

void back(int k) {

	
	if (s == Suma) {
	
		tipar(k - 1);
	}
	else {
		x[k] = -1;
		cout << k << endl;
		while (x[k] * a[k] + s < Suma && k < n + 1) {
			x[k] = x[k] + 1;
			s = s + x[k] * a[k];
			back(k + 1);
			s = s - x[k] * a[k];
		}
	}
}

void rezolvareSub1Problema4() {
	back(1);
}