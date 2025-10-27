#include<stdio.h>

int main() {
    float N1, N2, N3, N4,j, media, m_f;


    scanf("%f %f %f %f", &N1, &N2, &N3, &N4);


    media = (N1*2 + N2*3 + N3*4 + N4*1) / 10;
    printf("Media: %.1f\n", media);

    if (media >= 7.0) {
        printf("Aluno aprovado.\n");
    }
    else if (media < 5.0) {
        printf("Aluno reprovado.\n");
    }
    else {
        printf("Aluno em exame.\n");


        scanf("%f", &j);
        printf("Nota do exame: %.1f\n",j);

        m_f = (media + j) / 2;

        if (m_f >= 5.0) {
            printf("Aluno aprovado.\n");
        }
        else {
            printf("Aluno reprovado.\n");
        }

        printf("Media final: %.1f\n", m_f);
    }

    return 0;
}

