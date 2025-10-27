
#include <stdio.h>

int main() {
    int startHour, startMin, endHour, endMin;
    int startTotal, endTotal, duration, hour, min;


    scanf("%d %d %d %d", &startHour, &startMin, &endHour, &endMin);


    startTotal = startHour * 60 + startMin;
    endTotal = endHour * 60 + endMin;


    if (endTotal <= startTotal)
        duration = (24 * 60 - startTotal) + endTotal;
    else
        duration = endTotal - startTotal;


    hour = duration / 60;
    min = duration % 60;


    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hour, min);

    return 0;
}
