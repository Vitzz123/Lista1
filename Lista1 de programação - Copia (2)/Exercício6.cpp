#include <stdio.h>

int main() {
    float fabrica, distribuidor100, imposto100;
    float total, distribuidor, imposto;

 imposto100 = 45;
 distribuidor100 = 28.0;


    
    printf("Digite o custo de fabrica do carro: ");
    scanf("%f", &fabrica);

   
   distribuidor = fabrica * distribuidor100 / 100;


   imposto = fabrica * imposto100 / 100;

    
    total = fabrica + distribuidor + imposto;

    
    printf("O custo final ao consumidor é: %f\n", total);

    return 0;
}