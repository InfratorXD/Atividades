#include <stdio.h>
    int main(){
    int tamanho_do_valor, valor;

    scanf("%d",&tamanho_do_valor);

    int vetor[tamanho_do_valor];

    for(int posicao = 0;posicao < tamanho_do_valor;posicao++){
    scanf("%d", &valor);
    vetor[posicao] = valor;
    }

    int posicao_menor = 0;
    int MenorValor = vetor[0];

    for(int posicao = 1;posicao < tamanho_do_valor;posicao++){
        if(vetor[posicao] < MenorValor){
            MenorValor = vetor[posicao];
            posicao_menor = posicao;
        }
    }
    
    printf("Menor valor: %d\n", MenorValor);
    printf("Posicao: %d\n", posicao_menor);

        return 0;
    }