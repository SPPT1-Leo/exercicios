#include <stdio.h>

int inverte(int qtd, int n[]){
    int i;

    for(i = qtd-1; i >= 0; i--){
        printf("%d ", n[i]);
    }
}

int main(){

    int i, qtd;

    scanf("%d", &qtd);
    int num[qtd];

    for(i = 0; i < qtd; i++){
        num[i] = i+1;
    }

    printf(inverte(qtd, num));

}
