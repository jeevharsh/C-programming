//22. Subtract 5 if Hundreds Digit and One's Digit are Odd
#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    n = n - 5 * ((n / 100) % 2) * ((n % 10) % 2);

    printf("%d", n);

    return 0;
}