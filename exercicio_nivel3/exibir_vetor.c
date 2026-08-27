#include <stdio.h>

void exibeMemoria(char* mem, int tam);
int main() {
            
            int v[] = { 0, 1, 2, 3, 4 };
            int matriz[4][4] = {
                {0, 1, 2, 3},
                {4, 5, 6, 7},
                {8, 9, 10, 11},
                {12, 13, 14, 15}
            };
            exibeMemoria(v, 5 * sizeof(20)); //exibe o vetor e todos os seus bytes
            printf("\n");
            exibeMemoria(matriz, 4 *4 * sizeof(int)); //exibe a matriz e todos os seus bytes
        }

        void exibeMemoria(char * mem, int tam){
            for (int i = 0; i < tam; i++)
            {
                if (i % 16 == 0) //se o contador for multiplo de 16
                {
                   printf("%p ", mem);
                }
                
                printf("%p: %2X\n", mem,  *mem);
                mem++; //andando byte a byte na memória 
            }
            
        }