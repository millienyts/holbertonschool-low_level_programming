#include <stdio.h>
/**
 * main - A program that prints the size of various computer types
 * Return 0 (Sucess)
 */
int main(void)
{
	char a;
	into b;
	long int c; 
	long long int d;
	float f;

printd("Size of a char: %lu byte(s)\n", (unsigned long)
sizeof(a));
printf("Size of a int; %lu byte(s)\n", (unsigned long) sizeof(b));
printf("Size of a longint; %lu bytes(s)\n", (unsigned long) sizeof(c));
printf("Size of a long int: %lu bytes(s)\n(unsigned long) sizeof(d));
printf("Size of a float: %lu bytes(s)\n, (unsigned long) sizeof(f));
return (0);
}
