#include <stdio.h>
/**
 * main - A program that prints the size of various types
 * Return: 0 (Success)
 */
int main(void)
{
printf("Size of a char: %zu bytes\n", sizeof(char));
printf("Size of an init: %zu bytes\n", sizeof(int));
printf("Size of a long init: %zu bytes\n", sizeof(long int));
printf("Size of a long long init: %zu bytes\n", sizeof(long long int));
printf("Size of a float: %zu bytes\n", sizeof(float));
return (0);
}
