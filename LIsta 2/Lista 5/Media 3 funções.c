#include <stdio.h>

    int main(){
    float notas1, notas2, notas3, notas4;
    float soma_das_notas;
    float nota_do_exame;

//Media
        scanf("%f %f %f %f", &notas1, &notas2, &notas3, &notas4);
    
        notas1 = notas1 * 2;
        notas2 = notas2 * 3;
        notas3 = notas3 * 4;
        notas4 = notas4 * 1;

    soma_das_notas = (notas1 + notas2 + notas3 + notas4)/10;

    printf("Media: %.1f\n", soma_das_notas);

    if(soma_das_notas >= 7){
        printf("Aluno aprovado.\n");
    }
    else if(soma_das_notas < 5){
        printf("Aluno reprovado.\n");
    }
    else if(soma_das_notas == 5 || soma_das_notas < 6.9){
       printf("Aluno em exame.\n");

        scanf("%f", &nota_do_exame);
        printf("Nota do exame: %.1f\n", nota_do_exame);

        nota_do_exame = (nota_do_exame + soma_das_notas)/2;

        if(nota_do_exame >= 5){
            printf("Aluno aprovado.\n");
        }

    else{
        printf("Aluno reprovado.\n");
    }
        printf("Media final: %.1f\n", nota_do_exame);

    }
        return 0;
    }