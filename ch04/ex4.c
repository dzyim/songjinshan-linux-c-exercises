#include <stdio.h>

void print_digits(int x) {

	int d1 = x % 10;
	int d2 = (x/10) % 10;
	
	printf("The last digit: %d\n", d1);
	printf("The second to last digit: %d\n", d2);

}

int main(void) {

	print_digits(365);

	return 0;
}
