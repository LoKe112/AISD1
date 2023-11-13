#include <iostream>
#include "functions/functions.h"
#include <complex>

using namespace polynom;
using namespace std;

int main() {
	Polynomial <int> a = (5);
	cout << a << endl;
	int* c = new int [3] {2, 4, 5};
	Polynomial <int> b(c, 3);
	for (int i = 0; i < b.size(); i++) {
		cout << i << ':' << b[i] << endl;
	}
	cout << b << endl;
	return 0;
}