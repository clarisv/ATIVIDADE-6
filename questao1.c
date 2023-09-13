#include<stdio.h>

int main (void){

//Usando o comando switch, faça um algoritmo que leia o número de DDD e informe a qual cidade pertence, considerando só os seguintes valores: 
//61 - Brasília, 71 - Salvador, 11 - São Paulo, 21 - Rio de Janeiro, 32 - Juiz de Fora, 19 - Campinas, 27 - Vitória, 31 - Belo Horizonte 
//Qualquer outro - uma cidade no Brasil sem identificação 

int numeroDDD;

    printf("Qual o numero do DDD?\n");
    scanf("%d", &numeroDDD);

    switch (numeroDDD){

        case 61:
            printf("O DDD é de Brasilia");
            break;
        case 71:
            printf("O DDD é de Salvador");
            break;
        case 11:
            printf("O DDD é de São Paulo");
            break;
        case 21:
            printf("O DDD é de Rio de Janeiro");
            break;
        case 32:
            printf("O DDD é de Juiz de Fora");
            break;
        case 19:
            printf("O DDD é de Campinas");
            break;
        case 27:
            printf("O DDD é de Vitoria");
            break;
        case 31:
            printf("O DDD é de Belo Horizonte");
            break;
        
        default:
            printf("Uma cidade no Brasil sem identificação");
        
        
    }
    

}
   

