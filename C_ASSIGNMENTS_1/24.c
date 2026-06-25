//24.  Replace the Tens Digit with 0
#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    printf("%d", (n / 100) * 100 + (n % 10));

    return 0;
}