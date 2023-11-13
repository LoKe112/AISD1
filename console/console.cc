#include <polynomial/polynomial.h>
#include <iostream>

using namespace std;
using namespace polynom;

int main() {
	Polynomial <int> a(5);
	int* c = new int [5] {5, 1, 2, 3, 4};
	Polynomial <int> b(c, 5);
	for (int i = 0; i < b.size(); i++) {
		cout << i << '-' << b[i] << endl;
	}
	cout << '-' << b[9] << endl;	
	return 0;
}
