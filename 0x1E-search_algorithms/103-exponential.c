#include "search_algos.h"
/**
 *_min - finds the smallest between two numbers
 *@a: the first num
 *@b: the second num
 *Return: the smallest
 */
size_t _min(size_t a, size_t b)
{
if (a > b)
return (b);
else
return (a);
}

/**
 *b_search - performs a binary search
 *@array: the array to search
 *@start: the start index to search
 *@end: the end index to search
 *@value: the value to search for
 *Return: index if element is found else -1
 */
int b_search(int *array, size_t start, size_t end, int value)
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
return (b_search(array, start, mid - 1, value));
else
return (b_search(array, mid + 1, end, value));
}
/**
 *exponential_search - searches for a value in an array using the exponential
 *search algorithm
 *@array: the array to search
 *@size: the size of the array
 *@value: the value to search for
 *Return: the index of the value or -1 if not found
 */
int exponential_search(int *array, size_t size, int value)
{
size_t range = 1, start, end;

if (!array)
return (-1);

while (range < size && array[range] < value)
{
printf("Value checked array[%ld] = [%d]\n", range, array[range]);
range *= 2;
}

start = range / 2;
end = _min(range + 1, size) - 1;

printf("Value found between indexes [%ld] and [%ld]\n", start, end);
return (b_search(array, start, end, value));
}
