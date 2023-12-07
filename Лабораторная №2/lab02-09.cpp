#include <iostream>
void main()
{
	double z, u, y = 0.5, c = 1.4, x=2e-4;
	z = exp(c*x) / y + 3;
	u = sqrt( pow(z,3) - 0.1*z );
	std::cout << "z=" << z << std::endl;
	std::cout << "u=" << u << std::endl;
}

