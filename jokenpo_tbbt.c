#include <stdio.h>

int main(){

    char jog1, jog2;
    char pedra = 'R', papel = 'P', tesoura = 'S', lagarto = 'L', spock = 'K';

    scanf(" %c", &jog1);
    scanf(" %c", &jog2);

    if((jog1 == 'R') && (jog2 == 'S' || jog2 == 'L')){
        printf("jog1");
    }else{
        if((jog1 == 'P') && (jog2 == 'R' || jog2 == 'K')){
        printf("jog1");
    }else{
        if((jog1 == 'S') && (jog2 == 'P' || jog2 == 'L')){
        printf("jog1");
    }else{
        if((jog1 == 'L') && (jog2 == 'K' || jog2 == 'P')){
        printf("jog1");
    }else{
        if((jog1 == 'K') && (jog2 == 'S' || jog2 == 'R')){
        printf("jog1");
    }else{
        if(jog1 == jog2){
            printf("empate");
        }else{
            printf("jog2");
        }
    }
    }
    }
    }
    }


}
