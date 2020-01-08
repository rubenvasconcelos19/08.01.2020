#include <stdio.h>

int submenu;
int subloc;
float comp;
float larg;
int subtipo;
float areatotal;

int menu(){

    printf(" 1- Arrendamento. \n 2- Compra. \n 3- Venda. \n");
    scanf(" %d", &submenu);

    switch (submenu){

        case 1:

            Arrendamento();

        break;

        case 2:

            Compra();

        break;

        case 3:

            Venda();

        break;

        
        
        default:

            printf("Insira uma opção válida.\n");

            menu();

        break;
        }
}

int Arrendamento(){

    printf("Impossível de momento.\n");
    menu();

}

int Compra(){

    Tipo();

}

int Venda(){

    Tipo();

}

int Tipo(){

    printf(" 1- Moradia (550€ Metro Quadrado) \n 2- Terreno (300€ Metro Quadrado) \n 3- Quinta (200€ Metro Quadrado) \n 4- Armazém (600€ Metro Quadrado)\n");
    scanf(" %d", &subtipo);

    Loc();

}

int Loc(){

    if(submenu == 2){

        printf("Insira o seu local:\n 1- PDL(-4%%) \n 2- LAGOA(-3%%) \n 3- NORDESTE(-30%%)\n");
        scanf(" %d", &subloc);

        switch (subloc){
        
        case 1:
        case 2:
        case 3:

        Area();

        break;
        
        default:

            printf("Insira um local válido.");
            Loc();

        break;
        }

    }else if(submenu == 3){

        printf("Insira um local:\n 1- PDL(+5%%) \n 2- LAGOA(+2%%) \n 3- NORDESTE(+1%%)\n");
        scanf(" %d", &subloc);

        switch (subloc){
        
        case 1:
        case 2:
        case 3:

        Area();

        break;
        
        default:

            printf("Insira um local válido.\n");
            Loc();

        break;
        }
        

    }

}

int Area(){

    printf("Insira o comprimento\n");
    scanf(" %f", &comp);


    printf("Insira a largura\n");
    scanf(" %f", &larg);

    calculos();

}

int output(){



}


int calculos(){

    switch (submenu)
    {
    case 2:

        printf("Negócio - Compra\n");

        switch(subtipo){
            case 1:
                printf("Tipo - Moradia\n");

                switch(subloc){
                    case 1:
                    printf("Localização - PDL\n");
                    printf("Valor Metro Quadrado - 550€\n");
                    areatotal = larg*comp;
                    printf("Área Total = %.2f\n", areatotal);
                    printf("Total a pagar: %.2f\n",areatotal*550-((550*areatotal)*0.04));
                    break;
                    case 2:
                    printf("Localização - LAGOA\n");
                    printf("Valor Metro Quadrado - 550€\n");
                    areatotal = larg*comp;
                    printf("Área Total = %.2f\n", areatotal);
                    printf("Total a pagar: %.2f\n",areatotal*550-((550*areatotal)*0.03));
                    break;
                    case 3:
                    printf("Localização - NORDESTE\n");
                    printf("Valor Metro Quadrado - 550€\n");
                    areatotal = larg*comp;
                    printf("Área Total = %.2f\n", areatotal);
                    printf("Total a pagar: %.2f\n",areatotal*550-((550*areatotal)*0.30));
                    break;
                }

            break;
            case 2:
                printf("Tipo - Terreno\n");

                switch(subloc){
                    case 1:
                    printf("Localização - PDL\n");
                    printf("Valor Metro Quadrado - 300€\n");
                    areatotal = larg*comp;
                    printf("Área Total = %.2f\n", areatotal);
                    printf("Total a pagar: %.2f\n",areatotal*300-((300*areatotal)*0.04));
                    break;
                    case 2:
                    printf("Localização - LAGOA\n");
                    printf("Valor Metro Quadrado - 300€\n");
                    areatotal = larg*comp;
                    printf("Área Total = %.2f\n", areatotal);
                    printf("Total a pagar: %.2f\n",areatotal*300-((300*areatotal)*0.03));
                    break;
                    case 3:
                    printf("Localização - NORDESTE\n");
                    printf("Valor Metro Quadrado - 300€\n");
                    areatotal = larg*comp;
                    printf("Área Total = %.2f\n", areatotal);
                    printf("Total a pagar: %.2f\n",areatotal*300-((300*areatotal)*0.30));
                    break;
                }

            break;
            case 3:
                printf("Tipo - Quinta\n");

                 switch(subloc){
                    case 1:
                    printf("Localização - PDL\n");
                    printf("Valor Metro Quadrado - 200€\n");
                    areatotal = larg*comp;
                    printf("Área Total = %.2f\n", areatotal);
                    printf("Total a pagar: %.2f\n",areatotal*200-((200*areatotal)*0.04));
                    break;
                    case 2:
                    printf("Localização - LAGOA\n");
                    printf("Valor Metro Quadrado - 200€\n");
                    areatotal = larg*comp;
                    printf("Área Total = %.2f\n", areatotal);
                    printf("Total a pagar: %.2f\n",areatotal*200-((200*areatotal)*0.03));
                    break;
                    case 3:
                    printf("Localização - NORDESTE\n");
                    printf("Valor Metro Quadrado - 200€\n");
                    areatotal = larg*comp;
                    printf("Área Total = %.2f\n", areatotal);
                    printf("Total a pagar: %.2f\n",areatotal*200-((200*areatotal)*0.30));
                    break;
                }

            break;
            case 4:
                printf("Tipo - Armazem\n");

                 switch(subloc){
                    case 1:
                    printf("Localização - PDL\n");
                    printf("Valor Metro Quadrado - 600€\n");
                    areatotal = larg*comp;
                    printf("Área Total = %.2f\n", areatotal);
                    printf("Total a pagar: %.2f\n",areatotal*600-((600*areatotal)*0.04));
                    break;
                    case 2:
                    printf("Localização - LAGOA\n");
                    printf("Valor Metro Quadrado - 600€\n");
                    areatotal = larg*comp;
                    printf("Área Total = %.2f\n", areatotal);
                    printf("Total a pagar: %.2f\n",areatotal*600-((600*areatotal)*0.03));
                    break;
                    case 3:
                    printf("Localização - NORDESTE\n");
                    printf("Valor Metro Quadrado - 600€\n");
                    areatotal = larg*comp;
                    printf("Área Total = %.2f\n", areatotal);
                    printf("Total a pagar: %.2f\n",areatotal*600-((600*areatotal)*0.30));
                    break;
                }

            break;
        }

    break;
    
    case 3:

        printf("Negócio - Venda\n");

        switch(subtipo){
            case 1:
                printf("Tipo - Moradia\n");

                switch(subloc){
                    case 1:
                    printf("Localização - PDL\n");
                    printf("Valor Metro Quadrado - 550€\n");
                    areatotal = larg*comp;
                    printf("Área Total = %.2f\n", areatotal);
                    printf("Total a pagar: %.2f\n",areatotal*550+((550*areatotal)*0.05));
                    break;
                    case 2:
                    printf("Localização - LAGOA\n");
                    printf("Valor Metro Quadrado - 550€\n");
                    areatotal = larg*comp;
                    printf("Área Total = %.2f\n", areatotal);
                    printf("Total a pagar: %.2f\n",areatotal*550+((550*areatotal)*0.02));
                    break;
                    case 3:
                    printf("Localização - NORDESTE\n");
                    printf("Valor Metro Quadrado - 550€\n");
                    areatotal = larg*comp;
                    printf("Área Total = %.2f\n", areatotal);
                    printf("Total a pagar: %.2f\n",areatotal*550+((550*areatotal)*0.01));
                    break;
                }

            break;
            case 2:
                printf("Tipo - Terreno\n");

                switch(subloc){
                    case 1:
                    printf("Localização - PDL\n");
                    printf("Valor Metro Quadrado - 300€\n");
                    areatotal = larg*comp;
                    printf("Área Total = %.2f\n", areatotal);
                    printf("Total a pagar: %.2f\n",areatotal*300+((300*areatotal)*0.05));
                    break;
                    case 2:
                    printf("Localização - LAGOA\n");
                    printf("Valor Metro Quadrado - 300€\n");
                    areatotal = larg*comp;
                    printf("Área Total = %.2f\n", areatotal);
                    printf("Total a pagar: %.2f\n",areatotal*300+((300*areatotal)*0.02));
                    break;
                    case 3:
                    printf("Localização - NORDESTE\n");
                    printf("Valor Metro Quadrado - 300€\n");
                    areatotal = larg*comp;
                    printf("Área Total = %.2f\n", areatotal);
                    printf("Total a pagar: %.2f\n",areatotal*300+((300*areatotal)*0.01));
                    break;
                }

            break;
            case 3:
                printf("Tipo - Quinta\n");

                 switch(subloc){
                    case 1:
                    printf("Localização - PDL\n");
                    printf("Valor Metro Quadrado - 200€\n");
                    areatotal = larg*comp;
                    printf("Área Total = %.2f\n", areatotal);
                    printf("Total a pagar: %.2f\n",areatotal*200+((200*areatotal)*0.05));
                    break;
                    case 2:
                    printf("Localização - LAGOA\n");
                    printf("Valor Metro Quadrado - 200€\n");
                    areatotal = larg*comp;
                    printf("Área Total = %.2f\n", areatotal);
                    printf("Total a pagar: %.2f\n",areatotal*200+((200*areatotal)*0.02));
                    break;
                    case 3:
                    printf("Localização - NORDESTE\n");
                    printf("Valor Metro Quadrado - 200€\n");
                    areatotal = larg*comp;
                    printf("Área Total = %.2f\n", areatotal);
                    printf("Total a pagar: %.2f\n",areatotal*200+((200*areatotal)*0.01));
                    break;
                }

            break;
            case 4:
                printf("Tipo - Armazem\n");

                 switch(subloc){
                    case 1:
                    printf("Localização - PDL\n");
                    printf("Valor Metro Quadrado - 600€\n");
                    areatotal = larg*comp;
                    printf("Área Total = %.2f\n", areatotal);
                    printf("Total a pagar: %.2f\n",areatotal*600+((600*areatotal)*0.03));
                    break;
                    case 2:
                    printf("Localização - LAGOA\n");
                    printf("Valor Metro Quadrado - 600€\n");
                    areatotal = larg*comp;
                    printf("Área Total = %.2f\n", areatotal);
                    printf("Total a pagar: %.2f\n",areatotal*600+((600*areatotal)*0.02));
                    break;
                    case 3:
                    printf("Localização - NORDESTE\n");
                    printf("Valor Metro Quadrado - 600€\n");
                    areatotal = larg*comp;
                    printf("Área Total = %.2f\n", areatotal);
                    printf("Total a pagar: %.2f\n",areatotal*600+((600*areatotal)*0.01));
                    break;
                }

            break;
        }
    break;
}
}

int main(){

    menu();

}