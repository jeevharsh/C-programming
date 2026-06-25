//23. Sum the Digits of a 3-Digit Number
#include <stdio.h>

int main()
{
    int n, sum;

    scanf("%d", &n);

    sum = n / 100 + (n / 10) % 10 + n % 10;
    sum = sum / 10 + sum % 10;
    sum = sum / 10 + sum % 10;

    printf("%d", sum);

    return 0;
}