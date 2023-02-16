#include <stdio.h>

int collatz_stopping_time(int n)
{
	int count = 0;
	while (n > 1) {
		if (n%2 == 0) {
			n /= 2;
		} else {
			n = 3*n + 1;
		}
		count++;
	}
	return count;
}

int main(void)
{
	int i, n;

	printf("Enter an integer to calculate the Collatz stopping time: ");
	scanf("%d", &n);

	printf("\n");
	for (i = 1; i <= n; i++) {
		printf("stopping_time(%d) = %d\n", i, collatz_stopping_time(i));
	}
	printf("\n");

	return 0;
}
