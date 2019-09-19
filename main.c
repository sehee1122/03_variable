#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int x;
	char y;
	short z;
	float m;
	double n;
	
	printf("bytes of int : %d\n", sizeof(x));
	printf("bytes of char : %d\n", sizeof(y));
	printf("bytes of short : %d\n", sizeof(z));
	printf("bytes of float : %d\n", sizeof(m));
	printf("bytes of double : %d\n", sizeof(n));
	
	return 0;
}
