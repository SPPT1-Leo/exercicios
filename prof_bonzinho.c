#include <stdio.h>

int main(){

    float n1, n2, n3, trab, media;

    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);
    scanf("%f", &trab);

    if(n1 <=n2 && n1 <= n3){
        media = (n2 + n3 + trab)/3;
    }else{
        if(n2 <= n1 && n2 <= n3){
            media = (n1 + n3 + trab)/3;
        }else{
            if(n3 <= n1 && n3 <= n2){
                media = (n1 + n2 + trab)/3;
            }
        }
    }

    if(media >= 7){
        printf("Aprovado com %.1f", media);
    }else{
        printf("Final com %.1f", media);
    }

}
