#include <stdio.h>

    int main(){
   int idade_dias;
   int ano;
   int meses;
   int dias;

    scanf("%d", &idade_dias);
    
    ano = (idade_dias/365), ano;
    dias = (idade_dias%365), dias;
    meses = (dias/30), meses;
    dias = (dias%30), dias;

    printf("%d ano(s)\n", ano);
    printf("%d mes(es)\n", meses);
    printf("%d dia(s)\n", dias);

        return 0;
    }