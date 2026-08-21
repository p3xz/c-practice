#include <stdio.h>
//#include <conio.h>

int main (void )
{
    int n;

    printf("Enter the number : \n");
     scanf("%d",&n);

    if(n==1)
    {
        printf("Sunday");
    }
     else if (n==2)
    {
        printf("monday");
    }
   else  if(n==3)
    {
        printf("tuesday");
    }
    else if(n==4)
    {
        printf("wednesday");
    }
    else if(n==5)
    {
        printf("thursday");
    }
   else  if(n==6)
    {
        printf("friday");
    }
  else  if(n==7)
    {
        printf("saturday");
    }

    return 0 ;


}
