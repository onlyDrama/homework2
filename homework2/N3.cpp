#include "Log.h"
#include "Error.h"
#include <cmath>
double n3(double x, double y, double b)
{
	double z;

	if (b - y < 0 && b - x < 0 )
	{
		return 404;
	}

	if (x == 0 && y == 0 && b == 0)
	{
		return 404;
	}

	else if (b - y > 0 && b - x >= 0)
	{
		z = logbase(b - y, 10) * sqrt(b - x);
		
		return z;
	}
	

}