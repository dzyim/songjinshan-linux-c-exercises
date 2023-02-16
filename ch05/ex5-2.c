#include <stdio.h>

int abs(int x)
{
	return x < 0 ? -x : x;
}

int gcd(int a, int b)
{
	a = abs(a);
	b = abs(b);
	int large = a > b ? a : b;
	int small = a < b ? a : b;

	if (large % small == 0) {
		return small;
	} else {
		return gcd(large%small, small);
	}
}

int fib(int n)
{
	if (n <= 1) {
		return 1;
	} else {
		return fib(n-1) + fib(n-2);
	}
}

int main(void)
{
	int n1, n2, m, i;

	printf("Enter two integers to calculate their greatest common divisor:\n");
	scanf("%d%d", &n1, &n2);
	printf("gcd(%d, %d) = %d\n", n1, n2, gcd(n1, n2));
	printf("\n");

	printf("Enter an integer lower than 45 to calculate the Fibonacci series:\n");
	scanf("%d", &m);
	for (i = 0; i <= m; i++) {
		printf("fib(%d) = %d\n", i, fib(i));
	}

	return 0;
}
