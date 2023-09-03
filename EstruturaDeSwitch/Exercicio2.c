#include<stdio.h>

int main(){

    int codg, quant;
    float preco, valor;

    printf("LANCHES: \n100 - Cachorro Quente \n101 - Bauru Simples \n102 - Bauru com Ovo \n103 - Hamburguer \n104 - Cheeseburguer \n");
    printf("Informe o codigo do pedido: ");
    scanf("%d", &codg);
    printf("Quantos pedidos %d? ", codg);
    scanf("%d", &quant);
    
    switch(codg){
        case 100:
            preco = 10.1;
        break;
        case 101:
            preco = 8.3;
        break;
        case 102:
            preco = 8.5;
        break;
        case 103:
            preco = 12.5;
        break;
        case 104:
            preco = 13.25;
        break;
        default:
            printf("Codigo invalido!");
        break;
    }

    valor = preco * quant;

    printf("O valor a ser pago e: R$ %.2f.", valor);

    return 0;
}