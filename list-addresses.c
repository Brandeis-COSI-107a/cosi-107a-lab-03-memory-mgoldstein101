#include <stdio.h>

const int constant = 14;
int uninitialized;

void otherFunc() {
	return;
}

int main (int argc, char **argv) { 
	int stack = 7;	
	printf("stack variable: %p\n", &stack);
	printf("initialized data: %p\n", &constant);
	printf("uninitialized data: %p\n", &uninitialized);
	printf("main: %p\n", main);
	printf("function: %p\n", otherFunc);

	return 0;
}
