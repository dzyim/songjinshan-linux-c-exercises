#include <stdio.h>

int abs(int x) {
	return x < 0 ? -x : x;
}

int floor_div(int a, int b) {
	return a/b;
}

int ceil_div(int a, int b) {
	return a/b < 0 ? -ceil_div(abs(a), abs(b)) : (abs(a)-1)/abs(b) + 1;
}

int main(void) {

	int x1, x2, n;
	n = -4;
	x1 = -17;
	x2 = -16;

	printf("Floor div: %d / %d = %d\n", x1, n, floor_div(x1, n));
	printf("Floor div: %d / %d = %d\n", x2, n, floor_div(x2, n));
	printf("Ceil div: %d / %d = %d\n", x1, n, ceil_div(x1, n));
	printf("Ceil div: %d / %d = %d\n", x2, n, ceil_div(x2, n));

	return 0;
}
