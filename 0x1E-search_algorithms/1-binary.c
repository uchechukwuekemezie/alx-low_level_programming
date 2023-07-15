#include "search_algos.h"

/**
 *search - performs a binary search
 *@array: the array to search
 *@start: the start index to search
 *@end: the end index to search
 *@value: the value to search for
 *Return: index if element is found else -1
 */
int search(int *array, size_t start, size_t end, int value)
{
size_t i, mid = (start + end) / 2;
int num;

if (start > end)
return (-1);

printf("Searching in array: ");
for (i = start; i <= end; i++)
{
printf("%d", array[i]);
if (i != end)
printf(", ");
}
printf("\n");
num = array[mid];
if (num == value)
return (mid);
else if (num > value)
return (search(array, start, mid - 1, value));
else
return (search(array, mid + 1, end, value));
}
/**
 *binary_search - searches for a value
 *binary search algorithm
 *@array: the array to search
 *@size: the size of the array
 *@value: the value to search for
 *Return: index if the value found or -1
 */
int binary_search(int *array, size_t size, int value)
{
if (!array)
return (-1);
return (search(array, 0, size - 1, value));
}
