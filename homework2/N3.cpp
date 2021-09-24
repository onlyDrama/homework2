#include "Log.h"
#include <cmath>
#include "ERRORCONST.h"
double n3(double x, double y, double b)
{
	double z;

	if (b - y < 0 && b - x < 0 )
	{
		return ERRORCONST;
	}

	if (x == 0 && y == 0 && b == 0)
	{
		return ERRORCONST;
	}

	if (b - y > 0 && b - x >= 0)
	{
		z = logbase(b - y, 10) * sqrt(b - x);
		
		return z;
	}
	else
	{
		return ERRORCONST;
	}
	

}