#include <locale.h>

int main() {
    
    setlocale(LC_ALL, "Portuguese");

    int b, a, area;

    printf("digite a base do ret�ngulo: ");
    scanf("%d", &b);
    
    printf("digite a altura do ret�ngulo: ");
    scanf("%d", &a);

    area = b*a;

    printf("A �rea do ret�ngulo �: %d\n", area);

    return 0;

}


