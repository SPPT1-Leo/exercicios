#include <stdio.h>
#include <stdlib.h>

int main(){

    int tam, i, par = 0;

    scanf("%d", &tam);

    int pessoas[tam], alunos[tam], servidores[tam];

    for(i = 0; i < tam; i++){
        scanf("%d", &pessoas[i]);
    }

    for(i = 0; i < tam; i++){
        par = 0;
        if(pessoas[i]%2 != 0){
            par = 0;
        }else{
            par = 1;
        }
    }
}
