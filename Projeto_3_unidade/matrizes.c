#include <stdio.h>
#include <stdlib.h>
#include <matrizes.h>

struct matrizes randmat (int nlinhas, int ncolunas){
    int i, j;
    struct matrizes m;
    m.nlinhas = nlinhas;
    m.ncolunas = ncolunas;
    srand(time(NULL));
    for (i=0;i<m.nlinhas;i++) {
        for (j=0;j<m.ncolunas;j++) {
            m.m[i][j] = rand();
        }
    }
    return m;
}

struct matrizes atriVal (int nlinhas, int ncolunas){
    int i, j;
    struct matrizes m;
    m.nlinhas = nlinhas;
    m.ncolunas = ncolunas;
    srand(time(NULL));
    for (i=0;i<m.nlinhas;i++) {
        for (j=0;j<m.ncolunas;j++) {
            printf("Digite o elemento (%d,%d) da Matriz : ", i, j);
            scanf("%f", &m.m[i][j]);
        }
    }
    return m;
}
struct matrizes imprimir (struct matrizes m){
    int i, j;
    for (i=0;i<m.nlinhas;i++) {
        for (j=0;j<m.ncolunas;j++) {
            printf("%f ", m.m[i][j]);
        }
        printf("\n");
    }
    return m;
}

