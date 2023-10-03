#include <stdio.h>
    int main(){
    int n1=1,n2=2,n3=3,N;
    int i;

    scanf("%d",&N);

    for(i=0;i<N;i++){
        printf("%d %d %d PUM\n",n1,n2,n3);
        n1+=4;
        n2+=4;
        n3+=4;
    }
        return 0;
    }