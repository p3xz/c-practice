#include <stdio.h>

int main (void)
{

    int a , b ;

    printf("Enter the 1st number: ");
    scanf("%d" , &a);

    printf("Enter the second number: ");
    scanf("%d",&b);

    printf("the first number is %d and the second number is %d", a , b);
    
    if ( a>b )
    {
        printf(" The 1st number %d is bigger than the second program", a);

    }
    else if (b>a)
    {
        printf("The 2nd number %d is bigger than the second program", b);
    }
   else if (a==b)
    {
        printf("both number are equal");
    }
    
    else
    {
        printf("invalid inputs");
    }
}