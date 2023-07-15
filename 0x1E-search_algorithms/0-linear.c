#include "search_algos.h"

/**
 *linear_search - searches for a value in an array using linear search algo
 *@array: pointer to first element
 *@size: number of element in array
 *@value: value to search for
 *Return: -1 if failed
 */
int linear_search(int *array, size_t size, int value)
{
size_t i;

if (array == NULL)
{
return (-1);
}

for (i = 0; i < size; i++)
{
printf("Value checked array[%ld] = [%d]\n", i, array[i]);
if (array[i] == value)
{
return (i);  /* Found the value at index i*/
}
}
return (-1);
}
