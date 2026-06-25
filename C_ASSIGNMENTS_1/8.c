// 8. print 10's digit (2 digit input)
#include <stdio.h>

int main() {
    int x, y;

    printf("enter number: ");
    scanf("%d", &x);

    y = x / 10;

    printf("ten's digit = %d", y);

    return 0;
}
