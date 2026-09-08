#include <stdio.h>

char* minha_strcat(char* destino, const char* origem); //const é para não alterar a variavel

int main(){
    char s1[30] = "minha String";
    char s2[] = "legal";

    printf("Antes do strcat %s\n" , s1);
    minha_strcat(s1, s2);
    printf("Deois do strcat %s\n" , s2);
    //int tam = sizeOf() só funciona dentro da main porque é onde ela foi declarada 
}


char* minha_strcat(char* destino, const char* origem){
    char * aux = destino;
    while(*destino != '\0'){
        destino++;
    }

    while(*origem != '\0'){
        *destino = *origem;
        origem++;
        destino++;
    }
}