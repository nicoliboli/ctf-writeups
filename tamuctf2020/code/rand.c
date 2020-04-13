#include <stdlib.h>
#include <stdio.h>

int main() {
	int seed = 0x42424242;
	srand(seed);
	for(int i = 0; i < 100; i++) {
		printf("%d, ", rand());
	}
	printf("\n");
	return 0;
}
