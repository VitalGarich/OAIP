#include <iostream>

int main()
{
	double s, w, v, a = 1.5, b = -8.1, j = 4, t = 4e-8;
	s = sqrt(t * a / t + 1) + 4 * exp(2 * b);
	w = s * a / (1 + 0.1 * a);
	v = s + j * sqrt(pow(a, 2) * pow(b, 2));
	std::cout << "s=" << s << std::endl;
	std::cout << "w=" << w << std::endl;
	std::cout << "v=" << v << std::endl;
}