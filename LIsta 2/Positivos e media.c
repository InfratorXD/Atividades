#include <stdio.h>
    int main(){
    float valor;
    int positivo = 0;
    float soma_dos_positivos = 0;

for(int i= 0;i < 6; i++){
    scanf("%f", &valor);
    if(valor > 0){
        positivo++;
        soma_dos_positivos = soma_dos_positivos + valor;
        valor = 0;
    }
}
printf("%d valores positivos\n", positivo);
printf("%.1f\n", soma_dos_positivos/positivo);

        return 0;
    }