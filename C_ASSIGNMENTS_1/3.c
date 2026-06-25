// 3. sub 5 from user input
#include <stdio.h>

int main() {
    int x, y;

    printf("enter number: ");
    scanf("%d", &x);

    y = x - 5;

    printf("result = %d", y);

    return 0;
}