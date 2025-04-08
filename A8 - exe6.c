#include <stdio.h>

int main(void) {
	
	for(int i = 0; i < 2; i++){
		printf("\nA: %d  !%d = %d", i, i, !i);
	}
	return 0;
}