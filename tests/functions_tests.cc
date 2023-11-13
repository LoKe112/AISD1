#include <iostream>
#include "functions/functions.h"
#include <complex>

using namespace polynom;
using namespace std;

int main() {
	int* c = new int [3] {2, 4, 5};
	Polynomial <int> b(c, 3);
	for (int i = 0; i < b.size(); i++) {
		cout << i << ':' << b[i] << endl;
	}

	return 0;
}