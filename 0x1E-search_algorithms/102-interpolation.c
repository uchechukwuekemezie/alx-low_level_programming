#include "search_algos.h"
/**
 *interpolation_search - searches an array for a value using interpolation
 *@array: the array to search
 *@size: the number of the element
 *@value: the value
 *Return: the index of the value or -1 if not found
 */
int interpolation_search(int *array, size_t size, int value)
{
size_t low = 0, high = size - 1, pos;

if (!array)
return (-1);

while ((array[high] != array[low]))
{
pos = low + (((double)(high - low) / (array[high]
- array[low])) * (value - array[low]));
if (pos >= size)
{
printf("Value checked array[%ld] is out of range\n",
pos);
return (-1);
}

printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
if (array[pos] < value)
low = pos + 1;
else if (value < array[pos])
high = pos - 1;
else
return (pos);
}
if (array[low] == value)
return (low);
else
return (-1);
}
