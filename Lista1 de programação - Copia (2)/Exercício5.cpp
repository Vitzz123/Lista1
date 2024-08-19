#include <stdio.h>

int main() {
    float salarioatual, reajuste, salarionovo;

    
    printf("Digite o salário atual do funcionario: ");
    scanf("%f", &salarioatual);


    printf("Digite o valor de reajuste: ");
    scanf("%f", &reajuste);

    
     salarionovo = salarioatual + (salarioatual * reajuste / 100);

    
    printf("O novo salário do funcionario é: %f\n", salarionovo);

    return 0;
}