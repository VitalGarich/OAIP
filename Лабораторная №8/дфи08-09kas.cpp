#include <iostream> 
#include <iomanip>
#include <iomanip>
using namespace std;


int main()
{
	float a = 4, b = 7, x, x1, e = 0.0001;
	setlocale(LC_CTYPE, "Rus");

	if ((pow(a, 3) + 3 * a - 1) * (3*pow(a,2) + 3) > 0) {
		x1 = a;
	}
	else {
		x1 = b;
	}
	do {
		x = x1;
		x1 = x - ((pow(x, 3) + 3 * x - 1) / ((3 * pow(x, 2) + 3)));
	} while (abs(x1 - x) > e);

	cout << x1 << endl;

	return 0;
}