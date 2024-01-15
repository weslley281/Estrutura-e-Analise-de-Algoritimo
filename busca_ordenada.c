#include <stdio.h>
#include <locale.h>

// Função de busca binária em uma lista ordenada
int busca_binaria(int lista[], int tamanho, int elemento) {
    int inicio = 0;
    int fim = tamanho - 1;
    int meio;

    // Laço de busca continua enquanto a sublista não estiver vazia
    while (inicio <= fim) {
        // Calcula o ponto médio da sublista
        meio = (inicio + fim) / 2;

        // Verifica se o elemento está no meio da sublista
        if (lista[meio] == elemento) {
            return meio; // Elemento encontrado, retorna a posição
        } else if (lista[meio] < elemento) {
            inicio = meio + 1; // Descarta a metade inferior da sublista
        } else {
            fim = meio - 1; // Descarta a metade superior da sublista
        }
    }

    return -1; // Elemento não encontrado na lista
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    // Lista de exemplo (deve estar ordenada para a busca binária)
    int lista[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int tamanho = sizeof(lista) / sizeof(lista[0]); // Calcula o tamanho da lista
    int elementoProcurado = 8;

    // Chama a função de busca binária
    int resultado = busca_binaria(lista, tamanho, elementoProcurado);

    // Verifica se o elemento foi encontrado e exibe a mensagem apropriada
    if (resultado != -1) {
        printf("Elemento encontrado na posição %d.\n", resultado);
    } else {
        printf("Elemento não encontrado na lista.\n");
    }

    return 0;
}
