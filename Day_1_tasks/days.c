#include <stdio.h>
#define DAYSINWEEK 7

int main()
{
  printf("This program converts specific days into number of years and number of weeks \n");
  int ndays, year, week, days;

  printf("Enter the number of days\n");
  scanf("%d", &ndays);
  year = ndays / 365;
  printf("ndays modulus 365 =\n"); //for testing purposes
  printf("%d",(ndays % 365));
  week =(ndays % 365) / DAYSINWEEK;
  days =(ndays % 365) % DAYSINWEEK;
  printf ("%d is equivalent to %d years, %d weeks and %d days\n",
         ndays, year, week, days);
  return 0;
}