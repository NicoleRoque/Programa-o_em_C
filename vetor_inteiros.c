#include <stdio.h>

int main() {
  int vet[10] = {1, 2, 3, 4, 5, 3, 6, 7, 2, 3};//se não colocar o tamanho do vetor ele cria um vetor com o tamanho das quantidade do vetor

  for (int i = 0; i < 10; i++) printf("%d ", vet[i]); //exibe o vetor
  printf("\n");

  int totalRepet = 0; //declara a variavel e inicializa
  for (int i = 0; i < 9; i++) { //anda até a ante-penultima posição
    int qtdRepeticoes = 0; //declara a variavel e inicializa
    for (int j = i + 1; j < 10; j++) { //anda da segunda até a penultima posição
      if (vet[i] == vet[j]) { //verifica se são iguais
        qtdRepeticoes++; //se forem adiciona +  1 nas quantidades
      }
    }
    printf("Para o número %d, encontrei %d vezes\n", vet[i], qtdRepeticoes); //o primero %d mostra o numero da posição do vetor e o segundo mostra qtdade
    // Se encontrou exatamente 1 número igual,
    // então realmente tem mais um repetido
    if (qtdRepeticoes == 1) totalRepet++; 
  }
  printf("Total de repetidos: %d\n", totalRepet);
}