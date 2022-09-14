#include "main.h"

/**
 * jack_bauer - prints every minute of the day.
 * Return: void
 */
void jack_bauer(void)
{
	/** the loop variables for the hour loop and the minute loop */
	int hour, minute;

	/** the first loop (going from hour 0 to hour 23 */
	for (hour = 0; hour < 24; hour++)
	{
		/** the second loop (going from minute 0 to minute 59 */
		for (minute = 0; minute < 60; minute++)
		{
			/** printing the leftmost digit of the hour */
			_putchar(hour / 10 + '0');

			/** printing the rightmost digit of the hour */
			_putchar(hour % 10 + '0');

			/** printing a colon */
			_putchar(58);

			/**printing the leftmost digit of the minute */
			_putchar(minute / 10 + '0');

			/**printing the rightmost digit of the minute */
			_putchar(minute % 10 + '0');

			/**printing the new line */
			_putchar('\n');
		}
	}
}
