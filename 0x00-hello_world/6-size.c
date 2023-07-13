#include <stdio.h>
/**
 * main - A program that prints the size of various types
 * Return: 0 (Success)
 */
int main(void)
{
printf("Size of a char: %d byte(s)", sizeof(char));
printf("Size of an init: %d byte(s)", sizeof(int));
printf("Size of a long init: %d byte(s)", sizeof(long int));
printf("Size of a long long init: %d byte(s)", sizeof(long long int));
printf("Size of a float: %d byte(s)", sizeof(float));
return (0);
}
