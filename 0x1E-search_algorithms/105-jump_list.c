#include "search_algos.h"
#include <math.h>
/**
 *min_ - finds the smallest between two numbers
 *@a: the first num
 *@b: the second num
 *Return: the smallest
 */
size_t min_(size_t a, size_t b)
{
if (a > b)
return (b);
else
return (a);
}
/**
 *get_at_index - gets a value at an index in a singly linked list
 *@list: the list to search
 *@index: the index to get
 *Return: the value ant index or -1
 */
listint_t *get_at_index(listint_t *list, size_t index)
{
listint_t *temp = list;

while (temp)
{
if (temp->index == index)
return (temp);
temp = temp->next;
}
return (NULL);
}

/**
 *jump_list - searches for a value in a linked list using a
 *jump search algorithm
 *@list: the list to search
 *@size: the size of the list
 *@value: the value to search for
 *Return: index if value is found else -1
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
size_t a = 0, b = sqrt(size);
listint_t *temp;

if (!list)
return (NULL);

temp = get_at_index(list, b);
printf("Value checked at index[%ld] = [%d]\n", b, temp->n);
while (temp->n < value)
{
a = b;
b += sqrt(size);
temp = get_at_index(list, min_(b, size - 1));
if (b >= size - 1)
break;
printf("Value checked at index[%ld] = [%d]\n",
min_(b, size - 1), temp->n);
}
printf("Value found between indexes [%ld] and [%ld]\n", a,
min_(b, size - 1));
temp = get_at_index(list, a);
while (temp->n <= value)
{
printf("Value checked at index[%ld] = [%d]\n", a, temp->n);
if (temp->n == value)
return (temp);
a++;
if (a > size - 1)
break;
temp = get_at_index(list, a);
}
return (NULL);
}
