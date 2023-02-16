#include <stdio.h>

void print_multiplication_table(int n)
{
	if (n < 1) {
		printf("[WARN] Need a positive number for function print_multiplication_table().\n");
		return;
	}

	int i, j;
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			if (j <= i) {
				printf(j == 1 ? "%d" : "\t%2d", i*j);
			}
		}
		printf("\n");
	}
}

void diamond(int n, char c)
{
	if (n < 1) {
		printf("[WARN] Need a positive number for function diamond().\n");
		return;
	} else if (n % 2 == 0) {
		printf("[WARN] Need an odd number for function diamond().\n");
		return;
	}

	int center = n/2 + 1;
	int i, j;
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			if (i+j < 1+center || i+j > n+center || i-j < 1-center || i-j > n-center) {
				printf(j == 1 ? "" : "\t");
			} else {
				printf(j == 1 ? "%c" : "\t%c", c);
			}
		}
		printf("\n");
	}
}

int main(void)
{
	print_multiplication_table(9);
	printf("\n");
	diamond(3, '*');
	printf("\n");
	diamond(5, '+');

	return 0;
}
