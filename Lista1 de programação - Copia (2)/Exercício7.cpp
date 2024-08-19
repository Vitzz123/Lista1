#include <stdio.h>

int main() {
    int carro;
    float totalvendas, salariofixo, comissaocarro, salariototal, comissao100;

    
    printf("Digite o numero de carros vendidos: ");
    scanf("%d", &carro);

    
    printf("Digite o valor total das vendas: ");
    scanf("%f", &totalvendas);

    
    printf("Digite o salario fixo do vendedor: ");
    scanf("%f", &salariofixo);

    
    printf("Digite o valor da comissao por carro vendido: ");
    scanf("%f", &comissaocarro);

    
    comissao100 =  totalvendas * 0.05;

    
    salariototal = salariofixo + (comissaocarro * carro) + comissao100;

    
    printf("O salário final do vendedor é: %f\n", salariototal);

    return 0;
}
