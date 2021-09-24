#include "Log.h"
#include <cmath>
#include "ERRORCONST.h"
using namespace std;

double n2(double x, double a)
{
	double w = 1;

	if (x != 0)
	{
		if (fabs(x) < 1)
		{
			x = fabs(x);
			w = a * log(x); // натуральный логарифм

			return  w;
		}
		
		if (fabs(x) >= 1)
		{
			if (a - pow(x, 2) < 0)
			{
				return ERRORCONST;
			}
			if (fabs(x) >= 1)
			{
				w = sqrt((a - pow(x, 2)));
				return w;
			}
		}
	}

	else
	{
		return ERRORCONST;
	}
	
}