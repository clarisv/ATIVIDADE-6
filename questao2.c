#include<stdio.h>

int main (void){

//Escrever um algoritmo que leia o código do item pedido, a quantidade e calcule o valor a ser pago por aquele lanche. 
//Considere que a cada execução somente será calculado um item.

int codPedido, quantidade;
float preco, total;

printf("Digite o codigo do pedido:");
scanf("%d", &codPedido);

switch (codPedido){

        case 100:
            printf("Cachorro Quente\n");
            preco = 10.10;
            break;
        case 101:
            printf("Bauru Simples\n");
            preco = 8.30;
            break;
        case 102:
            printf("Bauru com ovo\n");
            preco = 8.50;
            break;
        case 103:
            printf("Hamburguer\n");
            preco = 12.50;
            break;
        case 104:
            printf("CheeseBurguer\n");
            preco = 13.25;
            break;
    }   

printf("Digite a quantidade desejada:");
scanf("%d", &quantidade);

total = preco * quantidade;

printf("Total a pagar: R$ %.2f\n", total);

return 0;

}

