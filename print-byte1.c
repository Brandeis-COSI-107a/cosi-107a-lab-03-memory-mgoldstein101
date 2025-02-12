#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv) {

	for (int i = 1; i < argc; i++) {
		long num = strtol(argv[i], NULL, 0) >> 8;
		int mask = 0xFF;
		int lowestOrder = num & mask;

		printf("0x%02X %3d\n", lowestOrder, lowestOrder);
	}
}
