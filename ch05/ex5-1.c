#include <stdio.h>
#include <math.h>

double fabs(double x) {
	return x < 0.0 ? -x : x;
}

int is_leap_year(int year) {
	if (year <= 0) {
		printf("[WARN] Need a positive number for function is_leap_year().\n");
		return 0;
	}
	return (year%4 == 0 && year%100 != 0) || year%400 == 0;
}

double myround(double x, int digits) {
	int exponent;

	if (x < 0.0) {
		return -myround(-x, digits);
		/* Both fabs(x) and -x are OK. */
	} else {
		exponent = digits;
		while (exponent > 0) {
			x *= 10;
			exponent--;
		}
		x = x < (ceil(x)+floor(x)) / 2 ? floor(x) : ceil(x);
		exponent = digits;
		while (exponent > 0) {
			x /= 10;
			exponent--;
		}
		return x;
	}
}

int main(void) {

	int year = 2000;
	double x = -5.6355;
	int digits = 2;

	printf("Is the year %d a leap year? %d\n", 
		year, is_leap_year(year));
	printf("myround(x = %f, digits = %d) = %.*f\n", 
		/* Set width and precision with %*.*f. */
		x, digits, digits, myround(x, digits));

	return 0;
}
