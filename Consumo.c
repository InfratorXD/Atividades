#include <stdio.h>

    int main(){
    int X; //Km
    float Y; //Litros
    float consumo_medio;

    scanf("%d", &X);
    scanf("%f", &Y);

    consumo_medio = X/Y;

    printf("%.3f km/l\n", consumo_medio);

        return 0;
    }