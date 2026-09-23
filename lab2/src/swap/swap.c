#include "swap.h"
#include <stdio.h>

void Swap(char *left, char *right)
{
	char temp = *left;
	*left = *right;
	*right = temp;
	printf( "%c %c \n",*left, *right);
}

