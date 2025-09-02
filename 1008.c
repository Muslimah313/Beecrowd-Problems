#include <stdio.h>
int main() {
    
        int number,hours;
    double vh,salary;

    scanf("%d %d %lf",&number,&hours,&vh);

    salary = hours*vh;

    printf("NUMBER = %d\n", number);
    printf("SALARY = U$ %.2lf\n", salary);

    return 0;
}


