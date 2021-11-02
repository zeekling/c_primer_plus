#include <stdio.h>

int main()
{
	float aboat = 32000.0;
	double abet = 2.14e9;
	long double dip = 5.32e-5;

	printf("%f can be written %e\n", aboat, aboat);
	// 下一行要求编译器支持c99或者其中的相关特性
	printf("And it's %a in hexadcimal, powers of 2 notation\n", aboat);
	printf("%f can be written %e\n", abet, abet);
	// %LF 可能会存在精度丢失的问题
	printf("%LF can be written %Le\n", dip, dip);

	return 0;
}
