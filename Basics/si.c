#include <stdio.h>

int main(void) {
    float principal, rate, time, interest; // SI = (P * R * T) / 100

    printf("Enter Principal Amount: ");
    scanf("%f", &principal);

    printf("\nEnter Rate of Interest (% per annum): ");
    scanf("%f", &rate);

    printf("\nEnter Time Period (in years): ");
    scanf("%f", &time);

  
    interest = (principal * rate * time) / 100;

    printf("Principal Amount      : %f\n", principal);
    printf("Rate of Interest  : %f\n", rate);
    printf("Time Period           : %f years\n", time);
#include <stdio.h>

int main(void) {
    float principal, rate, time, interest; // SI = (P * R * T) / 100

    printf("Enter Principal Amount: ");
    scanf("%f", &principal);

    printf("\nEnter Rate of Interest (% per annum): ");
    scanf("%f", &rate);

    printf("\nEnter Time Period (in years): ");
    scanf("%f", &time);

    // Calculate Simple Interest
    interest = (principal * rate * time) / 100;

    printf("\n----------------------------------\n");
    printf("Principal Amount      : %f\n", principal);
    printf("Rate of Interest    : %f\n", rate);
    printf("Time Period           : %f years\n", time);
    printf("----------------------------------\n");
    printf("\nThe simple interest is Rs. %f\n", interest);

    return 0; // Return successful exit code
}
    printf("\nThe simple interest is %f \n", interest);

    return 0; 
}