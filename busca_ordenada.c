#include <stdio.h>
#include <locale.h>

int busca_binaria(int lista[], int tamanho, int elemento){
    int inicio = 0;
    int fim = tamanho - 1;
    int meio;

    while (inicio <= fim)
    {
        meio = (inicio + fim) / 2;

        if (lista[meio] == elemento)
        {
            return meio;
        }else if (lista[meio] < elemento)
        {
            inicio = meio + 1;
        }else{
            fim = meio - 1;
        }
    }
    return -1;
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    int lista[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int tamanho = sizeof(lista) / sizeof(lista[0]);
    int elementoProcurado = 8;

    int resultado = busca_binaria(lista, tamanho, elementoProcurado);

    if (resultado != -1)
    {
        printf("Elemento encontrado na posição %d.\n", resultado);
    } else {
        printf("Elemento não encontrado na lista.\n");
    }
    return 0;
}