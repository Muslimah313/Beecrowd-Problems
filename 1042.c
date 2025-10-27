
#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int x = a, y = b, z = c;

    if (a > b) { int t = a; a = b; b = t; }
    if (a > c) { int t = a; a = c; c = t; }
    if (b > c) { int t = b; b = c; c = t; }

    printf("%d\n%d\n%d\n", a, b, c);
    printf("\n");
    printf("%d\n%d\n%d\n", x, y, z);

    return 0;
}
