#include <stdio.h>

int main(void)
{
    int prev = 0;
    int cur = 1;
    int fib;

    for (int i = 0; i <= 10; i++)
    {
        fib = prev + cur;

        prev = cur;
        cur = fib;
    }

    printf("The number is %d", cur);

    return 0;
}
