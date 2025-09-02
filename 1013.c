
#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, c, mAB, maior;

    scanf("%d %d %d", &a, &b, &c);

    mAB = (a + b + abs(a - b)) / 2;
    maior = (mAB + c + abs(mAB - c)) / 2;

    printf("%d eh o maior\n", maior);

    return 0;
}
