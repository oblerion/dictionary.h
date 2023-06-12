#include <stdlib.h>
#include <stdio.h>
#include "dictionary.h"

int main()
{
	dict* d = DICT();
	int a=1;
	int b=2;
	int c=5;

	dictadd(d,"a",&a);
	dictadd(d,"b",&b);
	dictadd(d,"c",&c);
	
	int* pi = dictat(d,"a");
	printf("\n-- at %s %d","a",*pi);

	pi = dictat(d,"b");
	printf("\n-- at %s %d","b",*pi);

	pi = dictat(d,"c");
	printf("\n-- at %s %d","c",*pi);

	dictfree(d);
	return 0;
}
