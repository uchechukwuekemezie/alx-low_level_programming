#include "search_algos.h"
/**
 *_search - performs a binary search
 *@array: the array to search
 *@start: the start index to search
 *@end: the end index to search
 *@value: the value to search for
 *Return: index if element is found else -1
 */
int _search(int *array, size_t start, size_t end, int value)
{
size_t i, mid = (start + end) / 2;
int num, check;

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
{
if (mid == 0 || array[mid - 1] != value)
return (mid);
check = _search(array, start, mid, value);
return (check);
}
else if (num > value)
return (_search(array, start, mid - 1, value));
else
return (_search(array, mid + 1, end, value));
}
/**
 *advanced_binary - searches for a value in an array using the
 *binary search algorithm
 *@array: the array to search
 *@size: the size of the array
 *@value: the value to search for
 *Return: index if the value found or -1
 */
int advanced_binary(int *array, size_t size, int value)
{
if (!array)
return (-1);
return (_search(array, 0, size - 1, value));
}
