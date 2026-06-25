//25.Move the Hundreds Digit to the Thousands Place
#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    printf("%d",
           ((n / 100) % 10) * 1000 +
           (n / 1000) * 100 +
           (n % 100));

    return 0;
}