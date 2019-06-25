#include <stdio.h>
#include <stdlib.h>
#include <matrizes.h>
#include <string.h>

struct matrizes randmat (int nlinhas, int ncolunas){
    /*Essa funcao vai gerar uma matriz com elementos gerados aleatoriamente
em dados floate essa matriz será atribuida a matriz em que sera chamada
a funcao*/
    int i, j;
    struct matrizes m;
    m.nlinhas = nlinhas;
    m.ncolunas = ncolunas;
    srand(time(NULL));
    /* com "srand(time(NULL))" os elementos serao diferentes a cada
simulação*/
    for (i=0;i<m.nlinhas;i++) {
        for (j=0;j<m.ncolunas;j++) {
            m.m[i][j] = rand()% 50;
            //"rand()% 50" gerara numeros aleatorios de 0 ate 50//
        }
    }
    return m;
}

struct matrizes atriVal (int nlinhas, int ncolunas){
    /*Essa funcao vai gerar uma matriz e o operador atribuira cada
elemento da matriz com dados em float e essa matriz será atribuida
a matriz em que sera chamada a funcao*/
    int i, j;
    struct matrizes m;
    m.nlinhas = nlinhas;
    m.ncolunas = ncolunas;
    for (i=0;i<m.nlinhas;i++) {
        for (j=0;j<m.ncolunas;j++) {
            printf("Digite o elemento (%d,%d) da Matriz : ", i, j);
            scanf("%.1f", &m.m[i][j]);
        }
    }
    return m;
}
struct matrizes imprimir (struct matrizes m){
    //Essa funcao imprime a matriz que sera atribuida a funcao//
    int i, j;
    for (i=0;i<m.nlinhas;i++) {
        for (j=0;j<m.ncolunas;j++) {
            printf("%.1f ", m.m[i][j]);
        }
        printf("\n");
    }
    return m;
}
struct matrizes arquivos(void){
    /*Essa funcao vai gerar uma matriz com elementos recolhidos
de um arquivo com cada elemento em float e essa matriz será atribuida
 a matriz em que sera chamada a funcao na devida operacao*/
    struct matrizes n;
    int i, j;
    char a[100];
    FILE *file;
    a[0]=0;
    printf("Digite a localizacao do arquivo: ");
    //Deve-se digitar a localizacao exata do arquivo, senao nao ira ler//
    while(strlen(a) < 2){
        fgets(a, 100, stdin);
    }
    a[strlen(a)-1]= 0;
    file = fopen(a, "r");
    //Acima irá abrir o arquivo para leitura
    fscanf(file,"%d %d", &n.nlinhas, &n.ncolunas);
    //Acima lera o numero de linhas e colunas da matriz que se
    //localiza no arquivo
    for(i=0; i<n.nlinhas; i++){
        for( j=0; j<n.ncolunas; j++){
            fscanf(file, "%f", &n.m[i][j]);
    //Acima lera cada elemento da matriz que se localiza no arquivo//'
        }
    }
    return n;
}

struct matrizes impArquivos(struct matrizes m){
    /*Essa funcao vai gerar uma matriz com elementos recolhidos
de um arquivofloate essa matriz será atribuida a matriz em que sera chamada
    a funcao*/
    int i, j;
    char a[100];
    FILE *fileout;
    a[0]=0;
    printf("Digite a localizacao de destino do arquivo: ");
    while(strlen(a) < 2){
        fgets(a, 100, stdin);
    }
    a[strlen(a)-1]= 0;
    fileout = fopen(a, "w");
    fprintf(fileout,"%d %d\n", m.nlinhas, m.ncolunas);
    for(i=0; i<m.nlinhas; i++){
        for( j=0; j<m.ncolunas; j++){
            fprintf(fileout, "%4.1f ", m.m[i][j]);
        }
        fprintf(fileout, "\n");
    }
    fclose(fileout);
}

