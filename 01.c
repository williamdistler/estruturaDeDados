#include <stdio.h>

int fat(int n){
    if(n == 1)
        return 1;
    else if(n == 2)
        return 2;
    else
        return n * fat(n - 2);
}

int main(){
    int n;
    printf("Digite um numero para calcular seu fatorial duplo: \n");
    scanf("%d", &n);
    printf("O fatorial eh: %d", fat(n));
    return 0;
}
