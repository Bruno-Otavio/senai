#include <stdio.h>

int main() {
	int i;
	for (i = 20; i >= 0; i = i - 4)
		printf("%2d\n", i);
	
	return 0;
}
