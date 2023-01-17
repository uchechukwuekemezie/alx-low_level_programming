#include <stdio.h>

/**
 * main: prints the name of the file the program was compiled from.
 * Return: always 0
 */

int main(void)
{
printf("%s\n", _FILE_);
return (0);
}
