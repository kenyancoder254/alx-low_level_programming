#include "main.h"
void printTime(int hour, int minute);
/**
 * jack_bauer - Prints every minute of the day
 *
 * Return: 0 if successful
 */
void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour < 24; ++hour)
	{
		for (minute = 0; minute < 60; ++minute)
		{
			printTime(hour, minute);
		}
	}
}
/**
 * printTime - prints HH:MM format
 * @hour: hours of the clock
 * @minute: minutes of the time
 *
 */
void printTime(int hour, int minute)
{
	_putchar((hour / 10) + '0');
	_putchar((hour % 10) + '0');
	_putchar(':');
	_putchar((minute / 10) + '0');
	_putchar((minute % 10) + '0');
	_putchar('\n');
}
