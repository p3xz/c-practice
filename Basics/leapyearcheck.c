#include <stdio.h>

int main(void)
{
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);
    
    if(year % 4 ==0)
    {
      if (year % 100 == 0)
      {
if (year % 400 == 0)
{
    printf("its a leap year");
}
else
{
    printf("not a leap year");
}
      }

      else
      {
        printf("a leap year");
      }
    }

    else
    {
        printf("not leap year");
    }
}
