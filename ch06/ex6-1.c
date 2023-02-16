#include <stdio.h>

int abs(int x)
{
	return x < 0 ? -x : x;
}

int gcd(int a, int b)
{
	a = abs(a);
	b = abs(b);

	int temp;
	int large = a > b ? a : b;
	int small = a < b ? a : b;

	while (large%small != 0) {
		temp = large%small;
		large = small;
		small = temp;
	}
	return small;	
}

int fib(int n)
{
	if (n > 1) {
		int temp, f0 = 1, f1 = 1, i = 2;
		while (i < n) {
			temp = f0 + f1;
			f0 = f1;
			f1 = temp;
			i++;
		}
		return f0 + f1;
	} else {
		return 1;
	}
}

int count_digit(int n)
{
	int i = 1, count = 0;
	while (i <= 100) {
		count += (i%10 == n);
		if (i > 9)	count += ((i/10)%10 == n);
		if (i > 99)	count += ((i/100)%10 == n);
		i++;
	}
	return count;
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
	printf("\n");
	printf("The digit '%d' appears %d times in the numbers from 1 to 100.\n", 9, count_digit(9));

	return 0;
}
