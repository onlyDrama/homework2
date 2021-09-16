#include "Log.h"
#include <cmath>
#include <math.h>
using namespace std;

double n2(double x, double a = 100)
{
	double w;

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
			else if (x >= pow(a,2))
			{
				w = sqrt((a - pow(x, 2)));
				return w;
			}

		}
	
}