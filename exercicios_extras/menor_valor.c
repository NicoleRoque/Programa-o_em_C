/*Escreva uma função que receba um vetor de inteiros e o tamanho do vetor.
 A função deverá retornar o menor elemento presente no vetor.*/
 #include <stdio.h>

int menorValor (int v[], int tam);

int main(){
    int v[] = {1, 2, 3, 4, 5, 6, 2};
    int resultado = menorValor(v, 8);
    printf("O valor valor deste vetor é o %d " , resultado);
}

int menorValor(int v[], int tam){
    int * ponteiro = v;
    int menor;
    for (int i = 0; i < tam; i++){
        if (*ponteiro < menor){  
            menor = *ponteiro;
        }
        ponteiro++;
        
    }
    return menor;
}
