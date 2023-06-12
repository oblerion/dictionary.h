
## example
```c
#include <stdlib.h>
#include <stdio.h>
#include "dictionary.h"

int main()
{
	dict* d = DICT();
	int a=1;
	int b=2;
	int c=5;
// add variable with string key
	dictadd(d,"a",&a);
	dictadd(d,"b",&b);
	dictadd(d,"c",&c);
// get element with key
	int* pi = dictat(d,"a");
	printf("\n-- at %s %d","a",*pi);

	pi = dictat(d,"b");
	printf("\n-- at %s %d","b",*pi);

	pi = dictat(d,"c");
	printf("\n-- at %s %d","c",*pi);
// free memory
	dictfree(d);
	return 0;
}
```
