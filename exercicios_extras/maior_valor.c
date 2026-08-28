/*Escreva uma função que receba um vetor de inteiros e o tamanho do vetor. 
A função deverá retornar o maior elemento presente no vetor.*/

#include <stdio.h>

int maiorValor (int v[], int tam);

int main(){
    int v[] = {1, 2, 3, 4, 5, 6, 2, 1};
    int resultado = maiorValor(v, 8);
    printf("O valor valor deste vetor é o %d " , resultado);
}

int maiorValor(int v[], int tam){
    int * ponteiro = v;
    int maior = 0;
    for (int i = 0; i < tam; i++){
        if (*ponteiro > maior){  
            maior = *ponteiro;
        }
        ponteiro++;
        
    }
    return maior;
}
