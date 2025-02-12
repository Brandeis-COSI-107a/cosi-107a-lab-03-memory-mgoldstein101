#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv) {
	/* Function to print the lowest byte of each provided
	 * commmand line argument. First converts it into a long,
	 * then uses a mask of 0xFF (255) to extract lowest byte.
	 *
	 * Format specifier explanation:
	 * %d prints the index in argv
	 * 0x has to be added manually as #X prints OX
	 * %02X prints a 2 byte Hex number and pads it with 0s if needed
	 * %3d prints a decimal number, padded with spaces if needed 
	 */

	for (int i = 1; i < argc; i++) {
		long num = strtol(argv[i], NULL, 0);
		int mask = 0xFF;
		int lowestOrder = num & mask;

		printf("%d 0x%02X %3d\n", i, lowestOrder, lowestOrder);
	}
}
