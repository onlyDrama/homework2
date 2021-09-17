#include "Log.h"
#include <cmath>
#include <math.h>
using namespace std;

double n2(double x, double a)
{
	double w;

	if (x != 0)
	{


		if (fabs(x) < 1)
		{

			w = a * logbase(fabs(x), 10); // logbase - лошарифм по основанию x
			return  w;


		}


		if (fabs(x) >= 1)
		{

			if (a - pow(x, 2) < 0)
			{
				return 404;

			}
			else if (fabs(x) >= 1)
			{
				w = sqrt((a - pow(x, 2)));
				return w;
			}
		}
	}
	else
	{
		return 404;
	}
	
}