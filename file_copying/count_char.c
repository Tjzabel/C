#include <stdio.h>

/* count characters in input; 1st version */

long main() {

	long nc;

	nc = 0;
	while (getchar() != EOF) {
		nc++;
	}
	printf("The number of characters entered is: ");
	printf("%ld\n", nc);
}
