#include <stdio.h>

int main(){

    float salario_atual, salario_novo;

    scanf("%f", &salario_atual);

    if(salario_atual <= 1000.00f){
        salario_novo = (salario_atual * 0.2) + salario_atual;
    }else{
        if(salario_atual > 1000.00 && salario_atual <= 1500.00){
            salario_novo = (salario_atual * 0.15) + salario_atual;
        }else{
            if(salario_atual > 1500.00 && salario_atual <= 2000.00){
                salario_novo = (salario_atual * 0.1) + salario_atual;
            }else{
                if(salario_atual > 2000.00){
                    salario_novo = (salario_atual * 0.05) + salario_atual;
                }
            }
        }
    }

    printf("%.2f", salario_novo);

}
