#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("avg %d\nsum %d", (a+b+c)/3, a+b+c);
    return 0;
}