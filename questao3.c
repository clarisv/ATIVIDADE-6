#include<stdio.h>

int main() {

//Criar um algoritmo que informe a quantidade total de calorias de uma refeição a partir do usuário que deverá informar o prato, a sobremesa e a bebida


int prato, sobremesa, bebida, calTotal, calPrato, calSobremesa, calBebida;
    
printf("Digite o codigo do prato prato: ");
scanf("%d", &prato);

switch (prato){
        case 1:
            printf("Vegetariano\n");
            calPrato = 180; 
            break;
        case 2:
            printf("Peixe\n"); 
            calPrato = 230;
            break;
        case 3:
            printf("Frango\n");
            calPrato = 250;
            break;
        case 4:
            printf("Carne\n"); 
            calPrato = 350;
            break;
        
    }

printf("Digite o codigo da bromemesa: ");
scanf("%d", &sobremesa);

switch (sobremesa){
        case 1:
            printf("Abacaxi\n"); 
            calSobremesa = 75;
            break;
        case 2:
            printf("Sorvete Diet\n");
            calSobremesa = 110;
            break;
        case 3:
            printf("Mouse Diet\n");
            calSobremesa = 170;
            break;
        case 4:
            printf("Mouse de chocolate\n");
            calSobremesa = 200;
            break;
    }

printf("Digite o codigo da bebida: ");
scanf("%d", &bebida);

switch (bebida){
        case 1:
            printf("Chá\n"); 
            calBebida = 30;
            break;
        case 2:
            printf("Suco de Laranja\n"); 
            calBebida = 70;
            break;
        case 3:
            printf("Suco de Melão\n"); 
            calBebida = 100;
            break;
        case 4:
            printf("Refrigerante Diet\n"); 
            calBebida = 65;
            break;

    }

calTotal = calPrato + calSobremesa + calBebida;

printf("O total de calorias da refeicao e: %d\n", calTotal, calSobremesa, calBebida);

return 0;

}