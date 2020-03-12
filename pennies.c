#include <stdio.h>
#include <cs50.h>
#include <math.h>
//Start with assigning the variables
//Double the amount of pennies every day
int main(void)
{
int numDays, start;
double total;
do
{
    numDays = get_int("How many days are in this month? ");
  }
  while (numDays<28 || numDays>31);
    do
    {
    start = get_int("How many pennies do you start with? ");
    }
    while (start<1);

for (int x=0;x<numDays; x++)
{
  total = total + start*pow(2,x);
}
  printf("$%.2f\n", total/100);

}

