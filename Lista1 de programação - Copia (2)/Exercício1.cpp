#include <locale.h>

int main() {
    
    setlocale(LC_ALL, "Portuguese");

        int numero , antecessor;

    printf("digite um valor: ");
    scanf("%d", &numero);

    antecessor = numero - 1;

    printf("O antecessor do n�mero %d � %d\n", numero , antecessor);

    return 0;



}