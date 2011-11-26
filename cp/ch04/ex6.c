/* ex6.c
 *
 * date: 2011-11-26
 * author: wwq0327 <wwq0327@gmail.com>
 */ 

#include <stdio.h>
#include <float.h>

int main()
{
	double dbl = 1.0/3.0;
	float flt = 1.0/3.0;
	long double ldbl = 1.0/3.0;

	printf("DBL: %.4f, %.12f, %.16f, %.32f\n", dbl, dbl, dbl, dbl);
	printf("FLT: %.4f, %.12f, %.16f, %.32f\n", flt, flt, flt, flt);
	printf("LDB: %.4Lf, %.12Lf, %.16Lf, %.32Lf\n", ldbl, ldbl, ldbl, ldbl);

	printf("DBL_DIG: %d\n", DBL_DIG);
	printf("FLT_DIG: %d\n", FLT_DIG);
	printf("LDBL_DIG: %d\n", LDBL_DIG);

	return 0;
}
