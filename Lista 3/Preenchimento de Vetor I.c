#include <stdio.h>
    int main(){
    int V[10];
    int i;

for(i = 0;i<10;i++){
    scanf("%d", &V[i]);

    if(i > 0){
    V[i] = V[i-1]*2;
}
}
for(i = 0; i<10; i++){
    printf("N[%d] = %d\n",i,V[i]);
    }
        return 0;
    }