/* Escreva uma função que receba um vetor de inteiros e o tamanho do vetor. A função deverá inverter a ordem dos elementos do vetor.*/

#include <stdio.h>

void inverteVetor(int v[], int tam );

int main (){
    int v[5] = {10, 20, 30, 40, 50}; //cria o vetor de exemplo

    inverteVetor(v, 5);
    for (int i = 0; i < 5; i++) //for pra mostrar tdas as posições do vetor 
    {
        printf("%d " , v[i]); //mostra todas as posições uma por uma, o %d signifca que vamos mostrar um número inteiro
    }
    

}

void inverteVetor(int v[], int tam){ //função recebe um vetor e o tamanho
    int * ponteiro1 = v; //ponteiro1 guarda o endereço de memória do primeiro elemento do vetor.
    int * ponteiro2 = v + tam - 1; //ponteiro2 guarda o endereço de memória do último elemento do vetor.

    int auxiliar; //cria uma variavel auxiliar para ter um endereço de memoria para inicializar o *ponteiroAuxiliar
    int *ponteiroAuxiliar = &auxiliar; //cria um ponteiro auxiliar
    for (int i = 0; i < tam / 2; i++){ //cria um for que percorre até a metade so vetor
        //o ponteiro auxiliar guarda o valor do primeiro elemento para o valor não se perder quando o primeiro elemento receber o valor do ultimo
         *ponteiroAuxiliar = *ponteiro1; //auxiliar recebe o valor do ponteiro da primeira posição 
         *ponteiro1 = *ponteiro2; //troca o valor da primeira posição pelo valor da última
         *ponteiro2 = *ponteiroAuxiliar; //troca o valor da primeira que esta guardado na auxiliar na ultima

         //faz as posições se encontrarem
         ponteiro1++; 
         ponteiro2--; 

    }
    
}