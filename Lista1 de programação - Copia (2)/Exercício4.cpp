#include <stdio.h>

int main(){

    int total, nulo, branco, valido;
    float nulo100, branco100, valido100;


    printf("Coloque o total de eleitores:\n");
        scanf("%d", &total);

    printf("Digite a quantidade de votos nulos, brancos, e validos nessa ordem:\n ");
        scanf("%d %d %d", &nulo, &branco, &valido);

    
    nulo100=(nulo/(float)total)*100;
    branco100=(branco/(float)total)*100;
    valido100=(valido/(float)total)*100;

    printf("%f %% dos votos foram nulos\n", nulo100);
    printf("%f %% dos votos foram em branco\n", branco100);
    printf("e %f %% dos votos foram validos\n", valido100); 
    
    return 0;

}