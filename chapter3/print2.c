#include <stdio.h>

int main(int argc, char* argv[]){
	unsigned int un = 3000000000;
	short end = 200;
	long big = 65537;
	long long veryBig = 12345678908642;
	printf("un = %u, un not %d\n", un, un);
	printf("end = %hd, end not %d\n", end, end);
	printf("big = %ld, big not %hd\n", big, big);
	printf("veryBig = %lld, veryBig not %ld\n", veryBig, veryBig);	

	return 0;
}
