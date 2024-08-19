#include <stdio.h>

int main() {
    float farenheit, celsiu;

    
    printf("Digite a temperatura em graus farenheit: ");
    scanf("%f", &farenheit);


    celsiu = (farenheit - 32) * 5 / 9;

    
    printf("A temperatura em graus Celsius é: %f C\n", celsiu);

    return 0;
}
