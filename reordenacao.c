#include <stdio.h>
#include <locale.h>

// Função para mover o elemento encontrado para o início da lista
void mover_para_frente(int registros[], int indice){
    int temp = registros[indice];

    // Desloca os elementos para a direita, abrindo espaço para o elemento encontrado
    for (int i = indice; i > 0; i--){
        registros[i] = registros[i - 1];
    }

    // Coloca o elemento encontrado no início da lista
    registros[0] = temp;
}

// Função para realizar a transposição do elemento encontrado com o anterior
void transposicao(int registros[], int indice) {
    int temp = registros[indice];
    registros[indice] = registros[indice - 1];
    registros[indice - 1] = temp;
}

// Função de busca linear para encontrar o índice do elemento procurado no array
int buscaLinear(int arr[], int tamanho, int elemento){
    for (int i = 0; i < tamanho; i++){
        if (arr[i] == elemento){
            return i; // Retorna o índice do elemento encontrado
        }
    }
    return -1; // Retorna -1 se o elemento não for encontrado
}

int main(){
    setlocale(LC_ALL, "Portuguese");

    printf("Exemplo de ordenação Mover-Para-Frente\n");

    // Array de exemplo
    int tabela1[] = {3, 12, 55, 1, 10, 5, 6, 77};
    int tamanho = sizeof(tabela1) / sizeof(tabela1[0]);
    int elementoProcurado = 10;

    // Busca o índice do elemento procurado usando busca linear
    int indice1 = buscaLinear(tabela1, tamanho, elementoProcurado);

    printf("Antes de Mover para Frente: \n");
    for (int i = 0; i < 8; i++) {
        printf("%d ", tabela1[i]);
    }
    printf("\n");

    // Move o elemento encontrado para o início da lista
    mover_para_frente(tabela1, indice1);
    
    printf("Após Mover para Frente: \n");
    for (int i = 0; i < 8; i++) {
        printf("%d ", tabela1[i]);
    }
    printf("\n");

    printf("Exemplo de ordenação Transposição\n");

    // Array de exemplo
    int tabela2[] = {3, 12, 55, 1, 10, 5, 6, 77};

    // Busca o índice do elemento procurado usando busca linear
    int indice2 = buscaLinear(tabela2, tamanho, elementoProcurado);

    printf("Antes da Transposição: \n");
    for (int i = 0; i < 8; i++) {
        printf("%d ", tabela2[i]);
    }
    printf("\n");

    // Realiza a transposição do elemento encontrado com o anterior
    transposicao(tabela2, indice2);
    
    printf("Após a Transposição: \n");
    for (int i = 0; i < 8; i++) {
        printf("%d ", tabela2[i]);
    }
    printf("\n");
}
