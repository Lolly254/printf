#include "main.h"
#include <limits.h>
#include <stdio.h>

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

len = _printf("rot13%R\n", "Main School");

_printf("Length yo:[%d, %i]\n", len, len);
