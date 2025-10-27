
#include <stdio.h>

int main() {
    double salary, newSalary, reajuste;
    int percentual;


    scanf("%lf", &salary);


    if (salary <= 400.00) {
        percentual = 15;
    } else if (salary <= 800.00) {
        percentual = 12;
    } else if (salary <= 1200.00) {
        percentual = 10;
    } else if (salary <= 2000.00) {
        percentual = 7;
    } else {
        percentual = 4;
    }


    reajuste = salary * percentual / 100.0;
    newSalary = salary + reajuste;


    printf("Novo salario: %.2lf\n", newSalary);
    printf("Reajuste ganho: %.2lf\n", reajuste);
    printf("Em percentual: %d %%\n", percentual);

    return 0;
}
