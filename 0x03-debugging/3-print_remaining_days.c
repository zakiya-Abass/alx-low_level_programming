#include "main.h"

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/
Task 3.txt
Who has access
A
System properties
Type
Text
Size
707 bytes
Storage used
707 bytes
Location
0x03. C - Debugging
Owner
Antony Bahati
Modified
Sep 14, 2022 by Antony Bahati
Opened
12:18 AM by me
Created
Sep 14, 2022
No description
Viewers can download
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
if ((year % 400 == 0) || (year % 4 == 0 && year % 100 !=  0))
{
if (month >= 3 && day >= 60)
{
day++;
}


printf("Day of the year: %d\n", day);
printf("Remaining days: %d\n", 366 - day);
}
else
{
if (month == 2 && day == 60)
{
printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
}
else
{
printf("Day of the year: %d\n", day);
printf("Remaining days: %d\n", 365 - day);
}
}
}
