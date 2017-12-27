#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	clock_t s, f;
	double duration;
	s = clock();

	f = clock();
	duration = (double) (f-s) / CLOCKS_PER_SEC;
	printf("%f 초입니다.\n", duration);
	return 0;
}
