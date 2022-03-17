#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - takes a date and prints how many days are
 * left in the year, taking leap years into account
 * @month: month in number format
 * @day: day of month
 * @year: year
 * Return: void
*/

void print_remaining_days(int month, int day, int year)
{
	if ((day > 1 && day < 31) || (month > 1 && month <= 12))
	{
		if ((year % 4 == 0 || year % 400 == 0) && !(year % 100 == 0))
		{
			if (month >= 2 && day >= 60)
			{
				day++;
			}
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 366 - day);
		}
		else
		{
			if (month == 2 && (day == 60 || day == 29))
			{
				if (day == 29)
				{
					printf("Invalide date: %02d/%02d/%02d\n", month, day, year);
				}
				else
				{
					printf("Invalide date: %02d/%02d/%0222d\n", month, day - 31, year);
				}
			}
			else
			{
				printf("Day of the year: %d\n", day);
				printf("Remaining days: %d\n", 365 - day);
			}
		}
	}
	else
	{
		printf("Invalide date: %02d/%02d/%02d\n", month, day, year);
	}
}
