#include <stdio.h>
#include <matrizes.h>

void menu()
{
    printf("\n============PROGRAMA DE MANIPULACAO DE MATRIZES============\n\n"
           "(1) Definir o tamanho da matriz A\n"
           "(2) Definir o tamanho da matriz B\n"
           "(3) Preencher a matriz A com valores aleatorios\n"
           "(4) Preencher a matriz B com valores aleatorios\n"
           "(5) Atribuir valores manualmente para os elementos da matriz A\n"
           "(6) Atribuir valores manualmente para os elementos da matriz B\n"
           "(7) Calcular A+B\n"
           "(8) Calcular A-B\n"
           "(9) Calcular A*B\n"
           "(10) Imprimir matriz A\n"
           "(11) Imprimir matriz B\n"
           "(12) Imprimir matriz C\n"
           "(13) Ler a matriz A de um arquivo\n"
           "(14) Ler a matriz B de um arquivo\n"
           "(15) Escrever a matriz C em um arquivo\n"
           "(16) Sair\n");
}

struct matrizes soma(struct matrizes a, struct matrizes b){
    int i, j;
    struct matrizes c;
    if(a.nlinhas == b.nlinhas &&
            a.ncolunas == b.ncolunas){
        c.ncolunas = a.ncolunas;
        c.nlinhas = a.nlinhas;
        for (i=0;i<c.nlinhas;i++) {
            for (j=0;j<c.ncolunas;j++) {
                c.m[i][j] = (a.m[i][j]+b.m[i][j]);
            }
            printf("\n");
        }
    }
    else {
        c.ncolunas = 0;
        c.nlinhas = 0;
        printf("\nNao eh possivel somar as matrizes\n");
    }
    return c;
}
struct matrizes subtracao(struct matrizes a, struct matrizes b){
    int i, j;
    struct matrizes c;
    if(a.nlinhas == b.nlinhas &&
            a.ncolunas == b.ncolunas){
        c.ncolunas = a.ncolunas;
        c.nlinhas = a.nlinhas;
        for (i=0;i<c.nlinhas;i++) {
            for (j=0;j<c.ncolunas;j++) {
                c.m[i][j] = (a.m[i][j]- b.m[i][j]);
            }
            printf("\n");
        }
    }
    else {
        c.ncolunas = 0;
        c.nlinhas = 0;
        printf("\nNao eh possivel subtrair as matrizes\n");
    }
    return c;
}

struct matrizes multiplicar(struct matrizes a, struct matrizes b){
    int i, j, nc, valor=0;
    struct matrizes c;
    if(a.ncolunas == b.nlinhas){
        c.ncolunas = b.ncolunas;
        c.nlinhas = a.nlinhas;
        for(i=0; i<c.nlinhas; i++){
            for(j=0; j<c.ncolunas; j++){
                c.m[i][j] =0;
                for(nc=0; nc<a.nlinhas; nc++){
                    valor +=  a.m[i][nc] * b.m[nc][j];
                }
                c.m[i][j]=valor;
                valor=0;
            }
        }
    }
    else {
        {
                c.ncolunas = 0;
                c.nlinhas = 0;
                printf("\nNao eh possivel multiplicar as matrizes\n");
            }
    }
    return c;
}


