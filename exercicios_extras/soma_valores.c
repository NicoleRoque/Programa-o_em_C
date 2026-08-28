/*Escreva uma função que receba um vetor de inteiros e o tamanho do vetor.
 A função deverá retornar a soma de todos os elementos do vetor*/

#include <stdio.h>

int somaVetor(int v[], int tam);

int main(){
    int v[] = {10, 10, 10, 10, 10, 10};

    int resultado = somaVetor(v, 6); //cria uma variavel pra guardar o resultado da função
    printf("Valor total dos elementos do vetor %d" , resultado); //exibe o valor o %d é pra dizer que será exibido um valor inteiro
}

int somaVetor(int v[], int tam){ //criação da função
    int * ponteiro  = v; //cria um ponteiro que armazena o endereço de memoria da primeira posição do vetor 
    int soma = 0; // cria uma variavel auxiliar para armazenar o valor da soma 
    for (int i = 0; i < tam; i++){ //percorre todo o vetor
        soma = soma + *ponteiro; //soma recebe o valor dela mais o valor do ponteiro na posição que ele esta no momento
        ponteiro++; //anda no vetor trocando o endereço a cada passada do for

    }
    return soma;
    
}