#include <stdio.h>
/**
 * main - A program that prints the size of various types
 * Return: 0 (Success)
 */
int main(void)
{
printf("Size of a char: %lu byte(s)\n", sizeof(char));
printf("Size of an init: %lu byte(s)\n", sizeof(int));
printf("Size of a long init: %lu byte(s)\n", sizeof(long int));
printf("Size of a long long init: %lu byte(s)\n", sizeof(long long int));
printf("Size of a float: %lu byte(s)\n", sizeof(float));
return (0);
}
