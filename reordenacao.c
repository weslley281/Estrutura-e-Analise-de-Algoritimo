#include <stdio.h>
#include <locale.h>

void mover_para_frente(int registros[], int indice){
    int temp = registros[indice];

    for (int i = indice; i > 0; i--){
        registros[i] = registros[i - 1];
    }

    registros[0] = temp;
}

void transposicao(int registros[], int indice) {
    int temp = registros[indice];
    registros[indice] = registros[indice - 1];
    registros[indice - 1] = temp;
}

int buscaLinear(int arr[], int tamanho, int elemento){
    for (int i = 0; i < tamanho; i++){
        if (arr[i] == elemento){
            return i;
        }
    }
    return -1;
}

int main(){
    setlocale(LC_ALL, "Portuguese");

    printf("Exemplo de ordenacao Mover-Para-Frente\n");
    int tabela1[] = {3, 12, 55, 1, 10, 5, 6, 77};
    int tamanho = sizeof(tabela1) / sizeof(tabela1[0]);
    int elementoProcurado = 10;

    int indice1 = buscaLinear(tabela1, tamanho, elementoProcurado);

    printf("Antes de Mover para Frente: \n");
    for (int i = 0; i < 8; i++) {
        printf("%d ", tabela1[i]);
    }
    printf("\n");

    mover_para_frente(tabela1, indice1);
    
    printf("Apos Mover para Frente: \n");
    for (int i = 0; i < 8; i++) {
        printf("%d ", tabela1[i]);
    }
    printf("\n");

    printf("Exemplo de ordenacao Transposicao\n");
    int tabela2[] = {3, 12, 55, 1, 10, 5, 6, 77};

    int indice2 = buscaLinear(tabela2, tamanho, elementoProcurado);

    printf("Antes da Transposicao: \n");
    for (int i = 0; i < 8; i++) {
        printf("%d ", tabela2[i]);
    }
    printf("\n");

    transposicao(tabela2, indice2);
    
    printf("Apos a Transposicao: \n");
    for (int i = 0; i < 8; i++) {
        printf("%d ", tabela2[i]);
    }
    printf("\n");
}

