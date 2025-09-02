#include<stdio.h>
int main()
{
    int distance,time,speed;
    double fuel;

    scanf("%d %d",&time,&speed);

    distance=time*speed;
    fuel=distance/12.00;

     printf("%.3lf\n",fuel);

    return 0;
}
