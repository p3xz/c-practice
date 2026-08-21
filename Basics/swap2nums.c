#include <stdio.h>
//#include <conio.h>
int main(void)
{
    //clrscr();
    int num1,num2,temp;
  
    printf("Enter two numbers: \n ");
    scanf("%d %d",& num1, &num2 );
  temp = num1;
    printf("the numbers are % d and %d",num1, num2);

    num1 = num2;
    num2 = temp;

    printf("the swapped numbers are %d and %d",num1 , num2);

    return 0;
    //getch();
}