//19. Subtract 5 if the Number is Odd
#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    n = n - 5 * (n % 2);

    printf("%d", n);

    return 0;
}