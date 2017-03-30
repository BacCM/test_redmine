#include <iostream>
#include <limits>
#include <math.h>
#include <iomanip>
#include <cmath>
#include <limits>
#include <time.h>

int main()
{
	time_t tt = time(0);
	tm* t = localtime(&tt);
	char s[256] = {0};
	size_t sz = 0;
	try {
		sz = strftime(s, 255, "%H%M%", t);
		std::cout << sz << " - "<< s <<std::endl;
	}
	catch (...)
	{
		std::cout << "exception" <<std::endl;
	}
	std::cin.get();
	return 0;

	//	long M = std::numeric_limits<long>::max();
	long M = 0x5A5A5A5A;
	long x = M;

	float y = static_cast<float>(x);
	double d = static_cast<double>(x);
	x = static_cast<long>(y);
	std::cout << "M = " << M << std::endl;
	std::cout << "x = " << x << std::endl;
	std::cout << std::setprecision(25) << "y = " << y << std::endl;
	std::cout << std::setprecision(25) << "d = " << d << std::endl;

	std::cout << "long diff: "<< abs(M - x) << std::endl;
	std::cout << "float diff: "<< fabs(1.0 * M - y) << ", double diff: " << fabs(M - d) << std::endl;

	return 0;
}







/*
	int a, b;
	a = 1,2,3,4,a = 5,6,7;
	std::cout << "a= " << a << std::endl;

	a = (1,2,3,4),a = (5,6,7);
	std::cout << "a= " << a << std::endl;

	a = (1,2,3,4,a = 5,6,7);
	std::cout << "a= " << a << std::endl;

	(a, b) = 100, 200;
	std::cout << "a= " << a << " b=" << b << std::endl;

	(a, b) = (100, 200);
	std::cout << "a= " << a << " b=" << b << std::endl;

	int v[2][3] = {{10, 20, 30}, {100, 200, 300}};
	std::cout << "v[1,1]= " << v[1, 1] << std::endl;
*/

