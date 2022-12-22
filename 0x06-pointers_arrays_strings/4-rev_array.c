#include "main.h"

/**
 *reverse_array -function that reverses the content of an array of integer
 *@a: array
 *@n: number of elements
 */
void reverse_array(int *a, int n)
{
int tmp, index;
for (index = n - 1; index > n / 2; index--)
{
tmp = a[n - l - index];
a[n - l - index] = a[index];
a[index] = tmp;
}
}
