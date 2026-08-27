/*Escreva uma função que receba dois vetores de inteiros de mesmo tamanho,
 e o tamanho de um deles. A função deverá copiar os elementos do primeiro vetor para o segundo.*/

 #include <stdio.h>

 void copiaVetor(int v1[], int v2[], int tam);

 int main(){
    int vet1[6] = {10, 20, 30, 40, 50, 60};
    int vet2[6];

    copiaVetor(vet1, vet2, 6);
    for (int i = 0; i < 6; i++){
        printf("%d " , vet2[i]);
    }
    printf("\n");
    
 }

 void copiaVetor(int vet1[], int vet2[], int tam){
    int *posicao_vet1 = vet1;
    int *posicao_vet2 = vet2;
    for (int i = 0; i < tam; i++){
        *posicao_vet2 = *posicao_vet1; // com o * eu troco o valor que tem dentro da posição de um valor pra outro 
        posicao_vet1++; //anda as posições do vet1
        posicao_vet2++; //anda as posições do vet2
        //observação
        //com * acesso o valor do endereço 
        //sem * acesso o endereço do valor
    }
    
 }