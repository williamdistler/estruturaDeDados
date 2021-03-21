#include <stdio.h>
#include <math.h>

int pot(int n, int p){
    if(p == 1){
        return n;
    }else{
        //Pq se eu fizer return pot(n*n, p-1) dá errado?
        return n * pot(n, p - 1);
    }
}

int main(){
    int n, p;
    scanf("%d %d", &n, &p);
    printf("%d", pot(n, p));
    return 0;
}
