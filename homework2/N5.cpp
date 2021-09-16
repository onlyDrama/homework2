#include <cmath>
double n5(double x)
{

	double y = (pow(x, 2) - 2.0 * x + 2) / (x - 1.0);
	if (x != 1)
	{
		return y;

	}
	else
	{
		return 404;
	}
}