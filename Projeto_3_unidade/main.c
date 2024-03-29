#include <stdio.h>
#include <stdlib.h>
#include <matrizes.h>
#include <funcoes.h>

int main(void){
    struct matrizes A, B, C;
    //A, B e C sao as matrizes que serao trabalhadas a seguir//
    int escolha;
    /*escolha eh a variavel que sera atribuida um numero
  o qual determinara a escolha da operacao a ser feita com
  as matrizes*/
    A.nlinhas = 0;
    A.ncolunas = 0;
    B.nlinhas = 0;
    B.ncolunas = 0;
    C.nlinhas = 0;
    C.ncolunas = 0;
    /*se nao for atribuido nenhum valor para os
  parametros da matriz, os mesmos serão iguais
  a 0*/
    do{
        menu();
        /*a função "menu()" chama o menu das operações
  do projeto*/
        printf("\n\nDigite a sua escolha: ");
        /*a funcao abaixo serve para digitar a operacoo
 a ser escolhida*/
        scanf("%d", &escolha);

        switch (escolha) {
        /*a função "switch" atribuiáa ao numero que for digitado
 uma operação, cada operacao sera sinalizada em cada "case".
 A operacao eh indicada no menu de acordo com o numero*/
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
            /* os "case 1" e "case 2" fazem a operação de atribuir
 a quantidade de linhas e colunas que as matrizes A e B
 respectivamente irão ter*/
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
                printf("Nao ha matriz.\n");
            }

            break;
            /* os "case 3" e "case 4" fazem a operação de atribuir
 valores aleatórios, limitados em 50, a cada elemento X(i,j)
 das matrizes A e B respectivamente*/
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
            /* os "case 3" e "case 4" fazem a operação de atribuir
 a definição de valores de cada elemento X(i,j)
 das matrizes A e B respectivamente ao operador do código*/
        case 7:
            C = soma(A, B);
            break;
        case 8:
            C = subtracao(A, B);
            break;
        case 9:
            C = multiplicar(A, B);
            break;
            /* os "case 7", "case 8" e "case 9" fazem a operação de somar,
subtrair e multiplicar respectivamente as matrizes A e B,
seguindo os critérios decada operação matematica com matrizes, e atribuem
o resultado da operação a matriz C*/
        case 10:
            imprimir(A);
            break;
        case 11:
            imprimir(B);
            break;
        case 12:
            imprimir(C);
            break;
            /* os "case 10", "case 11" e "case 12" fazem a operação de imprimir
respectivamente as matrizes A, B e C*/
        case 13:
            A = arquivos();
            break;
        case 14:
            B = arquivos();
            break;
            /* os "case 13" e "case 14" atribuem respectivamente
as matrizes A e B uma matriz que será recolhida de um arquivo
(recomenda-se um arquivo .txt), nesse arquivo deve ter uma primeira linha
com o numero de linhas e colunas respectivamente e a partir da segunda linha
a matriz. A localização dele sera digitada pelo operador*/
        case 15:
            impArquivos(C);
            break;
            /* o "case 15" imprime em um arquivo a matriz C. No caso
serão imprimidos os numeros de linhas e de colunas e depois os
elementos da matriz*/
        case 16:
            break;
            /* o "case 16" finaliza o processo*/
        default:
            printf("\n\nNao eh uma operacao do programa\n");
        }
        /* o "default" exibe a mensagem "Nao eh uma operacao do programa"
para qualquer numero digitado pelo operador que não seja uma operacao do
programa*/
        printf("\n");
    }while(escolha !=16);
    return 0;
}
