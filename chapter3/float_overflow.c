#include <stdio.h>

int main()
{
	float too_big = 3.4E38 * 100.0F;

	printf("too_big=%e\n", too_big);
	return 0;
}
