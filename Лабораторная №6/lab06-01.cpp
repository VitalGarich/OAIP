#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;
int main() {
	setlocale(LC_CTYPE, "Russian");

	float f = 1.2, j = -7e-3, w, s, y;

	for (w = 2; w < 5; w += 0.5) {

		s = w / (pow(w, 2) - j) * log(abs(w));

		if (s >= 3 * sqrt(f)) {

			y = s - exp(f / j);
		}
		else {

			y = pow(s, 2) / w;
		}
		printf("%f\n", s);
		printf("%f\n", y);
	}

	return 0;
}
