// 9. print one's digit (3 digit input)
#include <stdio.h>

int main() {
    int x, y;

    printf("enter number: ");
    scanf("%d", &x);

    y = x % 10;

    printf("one's digit = %d", y);

    return 0;
}