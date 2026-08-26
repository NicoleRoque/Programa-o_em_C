/*Escreva uma função que receba um vetor de inteiros, mais a quantidade de valores presentes nele,
 e retorne um número inteiro correspondente à quantidade de valores que aparecem mais de uma vez.
  Exemplo: se o vetor for [1, 2, 3, 4, 5, 3, 6, 7, 2, 8], o retorno será 2 
  (2 números se repetem, 2 e 3).*/
#include <stdio.h>
//declara a função antes da main
int contaRepetidos(int vet[], int  tamanho);
//declara a main
int main(){
  int vet[10] = {1, 2, 3, 4, 2, 3, 2, 2, 2, 8};//se não colocar o tamanho do vetor ele cria um vetor com o tamanho das quantidade do vetor
  int qtd = contaRepetidos(vet,10); //variavel com o valor do int declarado pelo metodo, ou seja o valor dos repetidos
  printf("A quantidade de números repetidos do vetor é: %d" , qtd); //exibe na tela
}

int contaRepetidos(int vet[], int tamanho){ //declaração do método

  int qtdRepeticoes = 0; //declara a variavel e inicializa
  int totalRepet; //declara a variavel e inicializa
  for (int i = 0; i < tamanho; i++) { //anda até a ante-penultima posição
    totalRepet = 0; //inicializa dentro do vetor
    for (int j = i + 1; j < tamanho; j++) { //anda da segunda até a penultima posição
      if (vet[i] == vet[j]) { //verifica se são iguais
        totalRepet++; //se forem adiciona +  1 nas quantidades
      }
    }
    //if dentro do for avalia cada elemento separadamente, se repetir uma vez aumenta a qtdRepetições 
    if(totalRepet >0 ) qtdRepeticoes++; 
  }
  return qtdRepeticoes; //retorna a quantidade
}