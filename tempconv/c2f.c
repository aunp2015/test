#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <assert.h>

int	c2f(int c) {
	return c*1.8+32;
}

int	main(void) {
	int	f;

	f = c2f(0);
	printf("f = %d\n", f);
	assert( f == 32 );

	f = c2f(100);
	printf("f = %d\n", f);
	assert( f == 212);

	return 0;
}
