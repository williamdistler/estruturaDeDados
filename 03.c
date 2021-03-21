#include <stdio.h>

int fun(int m, int n){
    if(m == n)
        return m;
    else
        return m * fun(m+1, n);
}

int main(){
    int m = 2, n;
    printf("Digite um numero: \n");
    scanf("%d", &n);
    printf("O resultado do fatorial eh: %d\n", fun(m, n));
    return 0;
}
