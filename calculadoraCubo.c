#include<stdio.h>

int calcularCubo(int *n){
    return (*n) * (*n) * (*n);
}

int main(){
    int n;
    int *ptr;
    printf("Digite um numero: \n");
    scanf("%d", &n);
    ptr = &n;
    printf("O resultado eh: %d\n", calcularCubo(ptr));
    return 0;
}
