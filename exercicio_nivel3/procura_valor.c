/*Escreva uma função que receba um vetor de inteiros, o tamanho do vetor e um valor a ser procurado.
 A função deve procurar o valor no vetor, caso encontre deve retornar a posição (índice) no vetor.
  Caso não encontre, deve retornar -1.*/

  #include <stdio.h>
  
  int procuraValor(int v[], int tam, int valor);
  int main(){
     int vet[] = {10, 20, 30, 40, 50, 60};
     int valor;
     printf("Digite o valor ");
     scanf("%d" , &valor );

     int pos = procuraValor(vet, 6, valor);
     if(pos != -1){
        printf("Encontrei o valor %d\n" , pos);
     }
     else{
        printf("valor não encontrado");
     }
     
  }

   int procuraValor(int v[], int tam, int valor){
    int * posicao = v; //cria uma variavel para guardar o endereço de memoria do vetor 
    for (int i = 0; i < tam; i++){ //anda por todo o vetor
       if(*posicao == valor){ //verifica se o valor armazenado no endereço é igual ao valor passado por parametro, equivalente a v[i] == valor
            return i; //se achou retorna a posição
       }
    }
        return -1; //se não retorna -1
    
   }