#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv) {
	/* Function to print each decimal command like argument 
	 * as a 48 bit hex number.
	 *
	 * Format specifier explanation:
	 * 0x: has to be done manually, using # appends OX not Ox
	 * 012: Print minimum of 12 chars (6 bytes) and pad with 0s
	 * lX: Print long Hex representation of number
	 */
	for (int i = 1; i < argc; i++) {
		long long num = strtol(argv[i], NULL, 10);
		printf("0x%012lX\n", num);
	}
}
