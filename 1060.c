
#include <stdio.h>

int main() {
    float num;
    int count = 0, i;

    for(i = 1; i <= 6; i++) {
        scanf("%f", &num);
        if(num > 0) {
            count++;
        }
    }

    printf("%d positive values\n", count);

    return 0;
}
