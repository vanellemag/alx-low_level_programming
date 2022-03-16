#include "main.h"
#include <stdio.h>
/**
 * main - prints the sum of all the multiples
 * of 3 or 5
 * Return: success
*/
int main(void)
{
	int i,   j, s, m;

	s = 0;
	i = 1;
	m = 0;
	while (i < 400 && m < 1024)
	{
		m = i * 3;
		s = s + m;
	}
	j = 0;
	m = 0;
	while (j < 225 &&  m < 1024)
	{
		m = j * 5;
		s = s + m;
	}
	printf("%d", s);
	return (0);
}
