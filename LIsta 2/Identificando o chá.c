#include <stdio.h>
    int main(){
    int primeiro_numero;
    int segundo_numero;
    int igual = 0;

    scanf("%d\n", &primeiro_numero);

    for(int i = 0;i < 5;i++){
    scanf("%d\n", &segundo_numero);
    if(primeiro_numero == segundo_numero){
    igual++;
    }
    }   

    printf("%d\n", igual);


        return 0;
    }
    