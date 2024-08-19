#include <stdio.h>

int main(){

    int ano, mes, dia, dias;
    int anoatual, mesatual, diaatual;
    int diaano, diames, diadia;

        printf("Ano atual: ");
            scanf("%d", &anoatual);
        
        printf("Mes atual: ");
            scanf("%d", &mesatual);
        
        printf("Dia atual: ");
            scanf("%d", &diaatual);
    

        printf("Ano do nascimento: ");
            scanf("%d", &ano);

        printf("Mes do nascimento: ");
            scanf("%d", &mes);

        printf("Dia do nascimento: ");
            scanf("%d", &dia);

        
    diaano = (anoatual * 365) - (ano * 365);
    diames = (mesatual * 30) - (mes*30);
    diadia = diaatual - dia;

    dias = diaano + diames + diadia;



        printf("A idade em dias e: %d\n", dias);

    return 0;

}