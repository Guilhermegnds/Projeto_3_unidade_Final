#include <stdio.h>
#include <stdlib.h>
#include <matrizes.h>
#include <string.h>

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
struct matrizes arquivos(){
    struct matrizes n;
    int i, j;
    char a[100];
    FILE *file;
    a[0]=0;
    printf("Digite a localizacao do arquivo: ");
 //   printf("tam = %d\n", strlen(a));
    while(strlen(a) < 2){
       fgets(a, 100, stdin);
    }
    a[strlen(a)-1]= 0;
    file = fopen(a, "r");
    printf("%d, %d\n", n.nlinhas, n.ncolunas);
    for(i=0; i<n.nlinhas; i++){
        for( j=0; j<n.ncolunas; j++){
           fscanf(file, "%f", &n.m[i][j]);
        }
      }
    return n;
}

struct matrizes impArquivos(struct matrizes m){
    int i, j;
    char a[100];
    FILE *fileout;
    a[0]=0;
    printf("Digite a localizacao de destino do arquivo: ");
 //   printf("tam = %d\n", strlen(a));
    while(strlen(a) < 2){
       fgets(a, 100, stdin);
   }
    a[strlen(a)-1]= 0;
    fileout = fopen(a, "w");
    fprintf(fileout,"%d %d\n", m.nlinhas, m.ncolunas);
    for(i=0; i<m.nlinhas; i++){
        for( j=0; j<m.ncolunas; j++){
           fprintf(fileout, "%4f ", &m.m[i][j]);
        }
        fprintf(fileout, "\n");
      }
}

