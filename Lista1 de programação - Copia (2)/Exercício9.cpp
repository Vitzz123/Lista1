#include <stdio.h>

int main() {
    float n1, n2, n3, media;

    
    printf("Digite a N1: ");
    scanf("%f", &n1);

    printf("Digite a N2: ");
    scanf("%f", &n2);

    printf("Digite a N3: ");
    scanf("%f", &n3);

    
    media = (2*n1 + 3*n2 + 5*n3) / 10;

    
    printf("A media final do aluno e: %f\n", media);

    return 0;
}