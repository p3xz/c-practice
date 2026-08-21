#include <stdio.h>

int main(void)
{
    char choice;
    printf("enter the conversion c for celsius to fahrenheit and f for fahrenheit to celsius: ");
    scanf("%c", &choice);

    if (choice == 'c')
    {
        float celsius, conversion;
        printf("Enter the value in Celsius: ");
        scanf("%f", &celsius);
        conversion = celsius * 1.8 + 32;
        printf("\nThe conversion is from %fC to %fF\n", celsius, conversion);
    }
    else if (choice == 'f')
    {
        float farh, conversion;
        printf("Enter the value in Fahrenheit: ");
        scanf("%f", &farh);
        conversion = (farh - 32) / 1.8;
        printf("The conversion is from %fF to %fC", farh, conversion);
    }
    else
    {
        printf("invalid input");
    }

    return 0;
}