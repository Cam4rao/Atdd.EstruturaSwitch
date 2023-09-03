#include<stdio.h>

int main(){

    int prato, sobremesa, bebida, cal = 0;

    printf("MENU: ");
    printf("\nCODIGO                PRATO                SOBREMESA                BEBIDA");
    printf("\n01                 Vegetariano              Pudim                     Suco");
    printf("\n02                     Ovos                 Soverte              Refrigerante ");
    printf("\n03                    Carne              Mouse de Maracuja        Agua de Coco");
    printf("\n04                    Frango            Mouse de Chocolate            Chá");

    printf("\n\nObs: Para pular a escolha digite qualquer numero, exceto 1, 2, 3 e 4.");
    printf("\n\nInforme o codigo do prato: ");
    scanf("%d", &prato);
    printf("Informe o codigo da sobremesa: ");
    scanf("%d", &sobremesa);
    printf("Informe o codigo da bebida: ");
    scanf("%d", &bebida);

    switch(prato){
        case 1:
            cal = cal + 180;
        break;
        case 2:
            cal = cal + 230;
        break;
        case 3:
            cal = cal + 250;
        break;
        case 4:
            cal = cal + 350;
        break;
        default:
            cal = cal + 0;
        break;        
    }

    switch(sobremesa){
        case 1:
            cal = cal + 75;
        break;
        case 2:
            cal = cal + 110;
        break;
        case 3:
            cal = cal + 170;
        break;
        case 4:
            cal = cal + 200;
        break;
        default:
            cal = cal + 0;
        break;        
    }

    switch(bebida){
        case 1:
            cal = cal + 20;
        break;
        case 2:
            cal = cal + 70;
        break;
        case 3:
            cal = cal + 100;
        break;
        case 4:
            cal = cal + 75;
        break;
        default:
            cal = cal + 0;
        break;        
    }
    
    printf("O total de calorias da refeicao e: %dcal.", cal);

    return 0;
}