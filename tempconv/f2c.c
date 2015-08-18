#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <assert.h>

int	f2c(int f) {
	return (f-32)/1.8;
}

int	main(void) {
	int	c;

	c = f2c(32);
	printf("c = %d\n", c);
	assert( c == 0 );

	c = f2c(212);
	printf("c = %d\n", c);
	assert( c == 100);

	return 0;
}
