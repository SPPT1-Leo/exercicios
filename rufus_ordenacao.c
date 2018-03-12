#include <stdio.h>

int main(){

    int rf1, rf2, rf3;

    scanf("%d", &rf1);
    scanf("%d", &rf2);
    scanf("%d", &rf3);

    if(rf1 > rf2 && rf2 > rf3){
        printf("G M P");
    }else{
        if(rf1 > rf2 && rf3 > rf2){
            printf("G P M");
        }else{
            if(rf2 > rf1 && rf1 > rf3){
                printf("M G P");
            }else{
                if(rf2 > rf3 && rf3 > rf1){
                    printf("P G M");
                }else{
                    if(rf3 > rf1 && rf1 > rf2){
                        printf("M P G");
                    }else{
                        if(rf3 > rf2 && rf2 > rf1){
                            printf("P M G");
                        }
                    }
                }
            }
        }
    }



}
