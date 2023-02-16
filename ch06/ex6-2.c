#include <stdio.h>

double fabs(double x)
{
	return x < 0.0 ? -x : x;
}

double sqrt(double x)
{
	if (x < 0.0) {
		printf("[WARN] A negative number was invalid for function sqrt().\n");
		return 0;
	}

	double root = 1.0;
	while (fabs(x/root - root) > 0.000001) {
		root = (x/root + root) / 2.0;
	}
	return root;
}

int is_prime(int x)
{
	if (x < 0) {
		printf("[WARN] A negative number was invalid for function is_prime().\n");
		return 0;
	}

	if (x <= 1) {
		return 0;
	} else if (sqrt(x) < 2) {
		return 1;
	} else if (x % 2 == 0) {
		return 0;
	} else {
		int i = 3;
		while (i <= sqrt(x)) {
			if (x % i == 0) {
				return 0;
			}
			i += 2;
		}
		return 1;
	}
}

int main(void)
{
	int n;

	printf("Enter an integer to check if it is prime: ");
	scanf("%d", &n);
	printf("is_prime(%d) = %d\n", n, is_prime(n));

	return 0;
}
