#include "revert_string.h"
#include <string.h>

void swap(char *left,char *right){
	char temp = *left;
	*left = *right;
	*right = temp;
}

void RevertString(char *str)
{
	int length = strlen(str);
	int left = 0;
	int right = length - 1;
	while (left < right){
		swap(&str[left],&str[right]);
		left++;
		right--;
	}
}

