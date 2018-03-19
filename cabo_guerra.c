#include <stdio.h>

int main(){

    int n, seqj, seqs, sums = 0, sumj = 0, i, h;

    scanf("%d", &n);

    h = n/2;

    for(i = 0; i < h; i++){

        scanf("%d", &seqj);
        sumj = seqj + sumj;
    }

    for(i = h+1; i <= n; i++){

            scanf("%d", &seqs);

            sums = seqs + sums;

        }
    if(sumj > sums){

        printf("Jedi %d %d", sumj, sums);

    }else{
        if(sums > sumj){

            printf("Sith %d %d", sumj, sums);

        }else{
            printf("Empate %d %d", sumj, sums);
        }
    }

}
