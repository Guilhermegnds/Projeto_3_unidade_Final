struct matrizes {
    int nlinhas;
    int ncolunas;
    float m[100][100];
};
struct matrizes randmat (int nlinhas, int ncolunas);
struct matrizes atriVal (int nlinhas, int ncolunas);
struct matrizes imprimir (struct matrizes m);
struct matrizes arquivos();
struct matrizes impArquivos(struct matrizes m);
