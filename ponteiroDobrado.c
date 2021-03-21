#include <stdio.h>

void imprimeVetor(int* vetor, int tamanho){
    for(int i = 0; i < tamanho; i++)
        printf("%d | ", vetor[i] * 2);
}

int main(){
    int vetor[] = {1, 2, 3, 4, 5};
    int tamanho = (int)(sizeof(vetor)/sizeof(vetor[0]));
    imprimeVetor(vetor, tamanho);
    return 0;
}
