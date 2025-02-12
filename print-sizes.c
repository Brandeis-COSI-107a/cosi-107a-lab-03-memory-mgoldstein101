#include <stdio.h>

int main () {
	
	int number = 978;
	int *pnumber;
	char arr[200];
	char *pchar;

	printf("size of char is %d\n", sizeof (char));
	printf("size of short is %d\n", sizeof (short));
	printf("size of int is %d\n", sizeof (int));
	printf("size of long is %d\n", sizeof (long));
	printf("size of long long is %d\n", sizeof (long long));
	printf("size of float is %d\n", sizeof (float));
	printf("size of double is %d\n", sizeof (double));
	printf("size of char * is %d\n", sizeof (char *));
	printf("size of int * is %d\n", sizeof (int *));
	printf("size of long * is %d\n", sizeof (long *));

	printf("The size of my character array is %d\n", sizeof (arr));
	pchar = arr;
	printf("The size of my character pointer is %d\n", sizeof (pchar));

	pnumber = &number;
	printf("The size of my int pointer is %d\n", sizeof (pnumber));
	printf("The size of what my integer pointer points at is %d\n", sizeof (*pnumber));

	return 0;
}
