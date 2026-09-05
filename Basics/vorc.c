#include <stdio.h>
//#include <conio.h>

int main (void)
{
    char check;
  //  clrcsr();

    printf("Enter the character : ");
    scanf("%c", &check);

    switch(check)
    {
        case 'a' : printf("It'a vowel");
        break;

         case 'e' : printf("It'a vowel");
        break;

         case 'i' : printf("It'a vowel");
        break;

         case 'o' : printf("It'a vowel");
        break;

         case 'u' : printf("It'a vowel");
        break;

        default : printf("its a consonent");
     //   getch();

    }

    return 0 ; 
}