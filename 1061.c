
#include <stdio.h>

int main() {
    int d1, h1, m1, s1;
    int d2, h2, m2, s2;
    int days, hours, minutes, seconds;


    scanf("Dia %d\n", &d1);
    scanf("%d : %d : %d\n", &h1, &m1, &s1);


    scanf("Dia %d\n", &d2);
    scanf("%d : %d : %d", &h2, &m2, &s2);


    seconds = s2 - s1;
    minutes = m2 - m1;
    hours   = h2 - h1;
    days    = d2 - d1;

    if(seconds < 0) {
        seconds += 60;
        minutes -= 1;
    }

    if(minutes < 0) {
        minutes += 60;
        hours -= 1;
    }

    if(hours < 0) {
        hours += 24;
        days -= 1;
    }


    printf("%d dia(s)\n", days);
    printf("%d hora(s)\n", hours);
    printf("%d minuto(s)\n", minutes);
    printf("%d segundo(s)\n", seconds);

    return 0;
}
