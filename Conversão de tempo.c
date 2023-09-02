#include <stdio.h>
    
    int main(){
    int N; // seg
    int N1; //hora
    int N2; //min
    int N3; //resto

    scanf("%d", &N);

    N1 = (N/3600), N1;
    N3 = (N%3600), N3;
    N2 = (N3/60), N2;
    N = (N%60), N;

    
    printf("%d:%d:%d\n",N1,N2,N);

        return 0;
    }