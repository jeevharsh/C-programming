// 6. divide by 8 and print remainder
#include <stdio.h>

int main() {
    int x, y;

    printf("enter number: ");
    scanf("%d", &x);

    y = x % 8;

    printf("result = %d", y);

    return 0;
}
