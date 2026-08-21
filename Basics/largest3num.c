#include <stdio.h>
//#include <conio.h>

int main (void)
{
    int a , b ,c ,largest;
    //clrscr();

    printf("Enter three numbers: \n");
    scanf("%d %d %d",&a,&b,&c);

    if (a>b && a>c)
    {
        largest = a;
    }
    else if (b>a && b>c)
    {
        largest = b ; 

    }
    else 
    {
        largest = c;
    }

    printf("The largest number is %d",largest);
// getch()
return 0;
}
