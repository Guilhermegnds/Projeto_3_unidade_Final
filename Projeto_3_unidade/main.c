#include <stdio.h>
#include <stdlib.h>
#include <matrizes.h>
#include <funcoes.h>

int main(void){
    struct matrizes A, B, C;
    int escolha;
    A.nlinhas = 0;
    A.ncolunas = 0;
    B.nlinhas = 0;
    B.ncolunas = 0;
    C.nlinhas = 0;
    C.ncolunas = 0;
    do{
        menu();
        printf("\n\nDigite a sua escolha: ");
        scanf("%d", &escolha);

        switch (escolha) {

        case 1:
            printf("===> Quantidade de linhas de A: ");
            scanf("%d", &A.nlinhas);
            printf("===> Quantidade de colunas de A: ");
            scanf("%d", &A.ncolunas);
            break;
        case 2:
            printf("===> Quantidade de linhas de B: ");
            scanf("%d", &B.nlinhas);
            printf("===> Quantidade de colunas de B: ");
            scanf("%d", &B.ncolunas);
            break;
        case 3:
            if(A.nlinhas>0 && A.ncolunas>0){
                A = randmat(A.nlinhas, A.ncolunas);
            }
            else {
                printf("vazio\n");
            }
            break;
        case 4:
            if(B.nlinhas>0 && B.ncolunas>0){
                B = randmat(B.nlinhas, B.ncolunas);
            }
            else {
                printf("vazio\n");
            }

            break;

        case 5:
            if(A.nlinhas>0 && A.ncolunas>0){
                A = atriVal(A.nlinhas, A.ncolunas);
            }
            else {
                printf("vazio\n");
            }
            break;
        case 6:
           if(B.nlinhas>0 && B.ncolunas>0){
               B = atriVal(B.nlinhas, B.ncolunas);
           }
           else {
               printf("vazio\n");
           }

            break;
        case 7:
            C = soma(A, B);
            break;
        case 8:
            C = subtracao(A, B);
            break;
        case 9:
            C = multiplicar(A, B);
            break;
        case 10:
            imprimir(A);
            break;
        case 11:
            imprimir(B);
            break;
        case 12:
            imprimir(C);
            break;
        case 13:
            A = arquivos();
            break;
        case 14:
            B = arquivos();
            break;
        case 15:
           impArquivos(C);
            break;
        case 16:
            break;
        default:
            printf("erro\n");
        }
        printf("\n");
    }while(escolha>0 && escolha <16);
    return 0;
}
