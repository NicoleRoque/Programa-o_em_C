
#include <stdio.h>

void ordenaVetor(int v[], int tam );

int main (){
    int v[5] = {10, 20, 30, 40, 50, 20,90, 70,80,60}; //cria o vetor de exemplo

    inverteVetor(v, 5);
    for (int i = 0; i < 9; i++) //for pra mostrar tdas as posições do vetor 
    {
        printf("%d " , v[i]); //mostra todas as posições uma por uma, o %d signifca que vamos mostrar um número inteiro
    }
}

    void ordenaVetor(int v[], int tam){
        for (int i = 0; i < tam; i++){
            int *ptr = v;
            for(int j = 0; j<tam-1-i; j++){
                if(*ptr > *(ptr+1)){ //ptr[1]
                    int temp =*ptr;
                    *ptr = *(ptr+1);
                    *(ptr+1) = temp;
                }
                ptr++;
            }
        }
        
    }