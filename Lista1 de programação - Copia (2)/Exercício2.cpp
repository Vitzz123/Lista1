#include <locale.h>

int main() {
    
    setlocale(LC_ALL, "Portuguese");

    int b, a, area;

    printf("digite a base do retângulo: ");
    scanf("%d", &b);
    
    printf("digite a altura do retângulo: ");
    scanf("%d", &a);

    area = b*a;

    printf("A área do retângulo é: %d\n", area);

    return 0;

}


