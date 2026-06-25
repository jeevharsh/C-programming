//21. Subtract 5 if sum of digit is Odd
#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    n = n - 5 * ((((n / 10) + (n % 10)) % 2));

    printf("%d", n);

    return 0;
}