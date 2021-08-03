#include <stdio.h>

int main(void) {
	int a, b, temp, R;
	scanf("%d %d", &a, &b);
	if (a < b) {
		temp = a;
		a = b;
		b = temp;
	}
	R = a % b;
	while (R != 0) {
	       a = b;
       		b = R;
 		R = a % b;
	}
	printf	("%d\n", b);
	return 0;
}
