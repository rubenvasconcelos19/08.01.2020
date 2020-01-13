#include <stdio.h>
#include <string.h>

int cod;
float qnt;
float total;
float price;
char compra[200];

void main(){
    
    printf("\t ARTIGO \t CÓDIGO \t PREÇO \n\t Cachorro \t 100 \t\t 2.50€ \n\t Hambúrguer \t 101 \t\t 3.50€ \n\t Cheeseburger \t 102 \t\t 4.00€ \n\t Omelete \t 103 \t\t 3.75€ \n\t Francesinha \t 104 \t\t 7.50€\n \t SAIR \t 0 \t Free \n");

    printf("Insira o código: ");
    scanf(" %d", &cod);

    if(cod != 0){

    switch(cod){

        case 100:
            printf("Inseriu ""%d"", qual a quantidade?\n", cod);
            scanf(" %f", &qnt);
            price = 2.50;
            total = total + price*qnt;
            strcat(compra, "Cachorro, ");
            main();
        break;

        case 101:
            printf("Inseriu ""%d"", qual a quantidade?\n", cod);
            scanf(" %f", &qnt);
            price = 3.50;
            total = total + price*qnt;
            strcat(compra, "Hamburguer, ");
            main();
        break;
        
        case 102:
            printf("Inseriu ""%d"", qual a quantidade?\n", cod);
            scanf(" %f", &qnt);
            price = 4.00;
            total = total + price*qnt;
            strcat(compra, "Cheeseburger, ");
            main();
        break;
        
        case 103:
            printf("Inseriu ""%d"", qual a quantidade?\n", cod);
            scanf(" %f", &qnt);
            price = 3.75;
            total = total + price*qnt;
            strcat(compra, "Omolete, ");
            main();
        break;
        
        case 104:
            printf("Inseriu ""%d"", qual a quantidade?\n", cod);
            scanf(" %f", &qnt);
            price = 7.50;
            total = total + price*qnt;
            strcat(compra, "Francesinha, ");
            main();
        break;

        default:
            printf("Insira um valor válido\n");
            main();
        break;
        
    }
    }else if(cod == 0){

    printf("Produtos: %s ficando a %.2f€ no total.\n", compra, total);
    }
}