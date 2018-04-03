#include <stdio.h>

double fatorial(double n){
    int i;
    int m = 0;
    for(i = 0; i < n; i++){

        m = i*n;

    }
    return m;
}

double euler(double N){

    int i;
    int m = N;
    for(i = 1; i <= N; i++){

        m += 1.00 + 1/fatorial(i);

    }
    return m;
}

int main(){

    double n=0, eu=0;

    scanf("%lf", &n);
    eu = euler(n);

    printf("%lf",eu);

}
