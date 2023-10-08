#include <stdio.h>
    int main(){
        float A[100];
        int i;
        for(i = 0;0<100;i++){
        if(scanf("%f",&A[i]) == EOF){ //Usar o EOF para que não haja nada além do esperado após o fim do arquivo desejado
        break;

        }

        }
        for(i = 0;i<100;i++){
        if(A[i] <= 10){
            printf("A[%d] = %.1f\n",i,A[i]);
        }
        }

        return 0;
    }