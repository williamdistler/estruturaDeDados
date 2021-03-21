#include<stdio.h>

int raiz(int n, int r){
    if(r * r == n){
        return r;
    }else{
        return raiz(r + 1, n);
    }
}

int main(){
    int n, r = 1;
    scanf("%d", &n);
    printf("%d", raiz(n, r));
    return 0;
}
