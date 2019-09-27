#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main()
{

    int Carta,Carta2,Pont=0;

    int A[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20},k,i=0,j=0; //Vetor numerico;

    int F; // controlador de jogo

    char B[20] = {'%','^','!','+','<','=','/','-','=','<','>','!','&','+','-','>','^','&','%','/'};//Vetor simbolico;

    int C[20] = {0}; //Vetor de controle(Matriz);


    printf("\n");
    printf(" ________________________________ \n");
    printf("|                                |\n");
    printf("|  Bem-Vindo ao Jogo da Memoria  |\n");
    printf("|________________________________|");
    printf("\n \n");

    printf("REGRAS:\n");
    printf("\n");
    printf("1) Quando o numero de uma carta for digitado, um simbolo sera mostrado. \n\n");

    printf("2) Se os simbolos forem iguais, as cartas ficarao em branco. \n\n");

    printf("3) Se os simbolos encontrados forem diferentes, as cartas serao viradas. \n\n");

    printf("4) O jogo acaba quando todas as cartas ficarem em branco.\n\n\n");

    printf("Boa Sorte!\n\n");

    Sleep(0000);

    do
    {

        printf("---------------------\n");

        // Impressao da Matriz Numerica;
        for(k = 0, i = 0; k < 20; k ++)

        {
            if(B[k] == ' ')
            {
                printf("|%4c", B[k]);
            }
            else
            {
                printf("|%4d", A[k]);
            }
            i++;

            if(i==4)
            {
                i=0;
                printf("|\n");
                printf("---------------------\n");
            }

        }

        printf("\n");
        do
        {
            printf("Digite a carta 1: ");
            scanf("%d",&Carta);
            printf("\n");

        }
        while(Carta>20 || Carta<=0);
        system("cls");
        fflush(stdin);
        C[Carta-1] = 1;


        //Comparacao de uma matriz com a outra

        for(k = 0; k < Carta; k++)

        {
            printf("---------------------\n");


            if(Carta == A[k]);

            {
                for(i=1; i<=20; i++)
                {

                    if(i!=Carta)
                    {
                        if(B[i-1]==' ')
                            printf("|%4c",B[i-1]);
                        else
                            printf("|%4d",A[i-1]);

                    }

                    else

                        printf("|%4c",B[i-1]);


                    j++;

                    if(j == 4)

                    {
                        j = 0;
                        printf("|\n");
                        printf("---------------------\n");


                    }


                }

                break;

            }

        }

        printf("\n ");

        do
        {

            printf("Digite a carta 2: ");

            scanf("%d",&Carta2);

            printf("\n");

        }

        while(Carta2>20 || Carta2<=0);

        system("cls");

        fflush(stdin);

        C[Carta2-1] = 1;


        printf("---------------------\n");
        for(k=0,i=0 ; k< Carta2; k++)
        {

            if(Carta2 == A[k])

            {
                for(i=1; i<=20; i++)
                {

                    if(i != Carta2 && i!=Carta)
                    {
                        if(B[i-1]==' ')
                            printf("|%4c",B[i-1]);
                        else

                            printf("|%4d",A[i-1]);

                    }


                    else

                        printf("|%4c",B[i-1]);


                    j++;

                    if(j == 4)
                    {
                        j = 0;
                        printf("|\n");
                        printf("---------------------\n");

                    }


                }

                break;

            }
        }


        printf("\n ");

        printf("Digite 3 para continuar e 4 para fechar o jogo: ");

        scanf("%d",&F);

        system("cls");


        if(B[Carta-1] == B[Carta2-1])

        {
            B[Carta-1] = ' ';
            B[Carta2-1] = ' ';
            Pont++;
            Pont++;
        }

        if(Pont==20)
        {

            F = 3;

            if(F == 3)
            {

            printf("\n");
            printf(" ____________________________ \n");
            printf("|                            |\n");
            printf("|    !!!!Voc%c venceu!!!!     |\n",136);
            printf("|____________________________|");
            printf("\n\n");

            }
        }

    }

    while(F!=4);
    printf("\n\n");
    printf(" _____________________ \n");
    printf("|                     |\n");
    printf("|   !!!Game Over!!!   |\n");
    printf("|_____________________|");
    printf("\n\n");


    return 0;
}
