#include <stdio.h>
//#include <conio.h>

int main (void )
{
    int grade;

    printf("Enter the number : \n");
     scanf("%d",&grade);

    if(grade>=90 )
    {
        printf("A");
    }
   else  if(grade>=80)
    {
        printf("B");
    }
   else  if(grade>=70)
    {
        printf("C");
    }
   else  if(grade>=60)
    {
        printf("E");
    }
   else  if(grade>=50)
    {
        printf("F");
    }
   else  if(grade>=40)
    {
        printf("Just pass");
    }
  else   if(grade<40)
    {
        printf("fail");
    }

    return 0 ;


}
