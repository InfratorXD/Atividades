#include <stdio.h>

int main() {
int T;
unsigned long long int N[61];
int posicao;
int i;

N[0] = 0;
N[1] = 1;

for(i = 2;i<61;i++){
N[i] = N[i - 1] + N[i - 2];
}

scanf("%d", &T);

for(i = 0;i<T;i++){
scanf("%d", &posicao);
printf("Fib(%d) = %lld\n",posicao,N[posicao]);
}


	return 0;
}