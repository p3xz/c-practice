#include <stdio.h>
#include <math.h>
int main(void)

{
    int n;
    float squareroot;

     printf("Enter a number: ");
    scanf("%d", &n);
    squareroot = sqrt(n);
    printf("Square root of %d = %.2f", n, squareroot);
       return 0;


}