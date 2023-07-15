#include "search_algos.h"
#include <math.h>
/**
 *jump_search - searches for a value in a sorted array
 *@array: pointer
 *@size: number of elements
 *@value: value
 *Return: -1 if unsuccessful
 */
int jump_search(int *array, size_t size, int value)
{
size_t i;

if (array == NULL)
{
return (-1);
}

int step = sqrt(size);
int prev = 0;

printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
while (array[step] <= value && step < size)
{
prev = step;
step += sqrt(size);
if (step < size)
{
printf("Value checked array[%d] = [%d]\n",
step, array[step]);
}
}
printf("Value found between indexes [%d] and [%d]\n", prev, step);
while (array[prev] < value)
{
prev++;
if (prev == size)
{
return (-1);
}
printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
}
if (array[prev] == value)
{
return (prev);
}
return (-1);
}
