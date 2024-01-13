// -*- coding: utf-8 -*-
#include <stdio.h>
#include <locale.h>

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

    int lista[] = {10, 20, 30, 40, 50};
    int tamanho = sizeof(lista) / sizeof(lista[0]);
    int elementoProcurado = 30;

    int resultado = buscaLinear(lista, tamanho, elementoProcurado);

    if (resultado != -1) {
        printf("Elemento encontrado na posicao %d\n", resultado);
    }else{
        printf("Elemento não encontrado na lista.\n");
    }
    
    return 0;
}