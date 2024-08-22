#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    a += 894; b /= 10;
    printf("%d\n%d", a, b);
    return 0;
}