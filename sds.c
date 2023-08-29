#include <stdio.h>

int main() {
int N;
int aaa;
int notas[] = {100, 50, 20, 10, 5, 2, 1};
int quantidade;
    scanf("%d", &N);

    printf("%d\n", N);


    for (aaa = 0;aaa < 7;++aaa) {
        quantidade = N / notas[aaa];
        N %= notas[aaa];
        printf("%d nota(s) de R$ %d,00\n", quantidade, notas[aaa]);
    }

    return 0;
}
