#include "main.h"

/**
 *swap_int - swap the value of two intergers
 *
 *@a: first interger
 *@b: second interger
 *
 */

void swap_int(int *a,int *b)
{
	int temp;

temp = *a;
*a = *b;
*b = temp;
}
