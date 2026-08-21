#include <stdio.h>
int main (void)
{
int a , b ,c ;
double avg;

printf("Enter the first number : ");
scanf("%d",&a);

printf("Enter the second number : ");
scanf("%d",&b);

printf("Enter the third number : ");
scanf("%d",&c);


avg = (a + b + c) / 3.0;
printf("The average of %d , %d and %d is : %lf \n",a , b , c , avg);
}