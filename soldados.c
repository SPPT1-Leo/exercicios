#include <stdio.h>

int main(){

    int i, sold;
    double media = 0;

    scanf("%d", &sold);

    double alt[sold];

    for(i = 0; i < sold; i++){
        scanf("%lf", &alt[i]);
    }

    for(i = 0; i < sold; i++){
        media += alt[i];
    }
    media = media/sold;

    printf("%.2f\n", media);

    for(i = 0; i < sold; i++){
        if(alt[i] > media){
            printf("G ");
        }else{
            if(alt[i] == media){
                printf("M ");
            }else{
                printf("P ");
            }
        }
    }

}
