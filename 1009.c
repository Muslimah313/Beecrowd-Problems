#include <stdio.h>

int main() {
    char name[50];
    double salary,tSales,fSalary;

    scanf("%s %lf %lf",name,&salary,&tSales);

    fSalary = salary+(tSales*0.15);

    printf("TOTAL = R$ %.2lf\n",fSalary);

    return 0;
}

