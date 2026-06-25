// 10. print Hundreds Digit(3 digit input)
#include <stdio.h>

int main() {
    int x, y;

    printf("enter number: ");
    scanf("%d", &x);

    y = x / 100;

    printf("100's digit = %d", y);

    return 0;
}
