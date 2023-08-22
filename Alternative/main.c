#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    /* printf("Unknown:[%r]\n"); */
    return (0);
}

/*
int main(void)
{
	int count1, count2, count3, count4, count5, count6, count7, count8;

	count1 = printf("Age is = %d\n", 230);
	count2 = _printf("Age is = %d\n", 230);
	
	count3 = printf("My name is %s\n", "Asuma");
	count4 = _printf("My name is %s\n", "Asuma");
	
	count5 = printf("Character: %c\n", 'A');
	count6 = _printf("Character: %c\n", 'A');

	count7 = printf("Percentage: %%\n");
	count8 = _printf("Percentage: %%\n");

	printf("Std printf vs Custom printf\n");
	printf("%d vs %d\n", count1, count2);
	printf("%d vs %d\n", count3, count4);
	printf("%d vs %d\n", count5, count6);
	printf("%d vs %d\n", count7, count8);

	return (0);
}*/
