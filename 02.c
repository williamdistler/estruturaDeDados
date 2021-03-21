#include <stdio.h>

int fun(int m, int n){
    if(m == n)
        return m;
    else
        return m * fun(m+1, n);
}

int main(){
    int m, n;
    printf("Digite um intervalo de valores: \n");
    scanf("%d %d", &m, &n);
    if(m <= n)
        printf("O produto de todos algarismos do intervalo eh: %d", fun(m, n));
    else
        printf("O produto de todos algarismos do intervalo eh: %d", fun(n, m));
    return 0;
}
