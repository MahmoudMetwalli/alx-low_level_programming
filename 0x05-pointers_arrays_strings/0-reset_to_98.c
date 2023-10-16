#include "main.h"


/**
 * reset_to_98 - reset int value to 98
 * @*n: int to reset
 */
void reset_to_98(int *n)
{
	int *p;

	p = &*n;
	*p = 98;
}

