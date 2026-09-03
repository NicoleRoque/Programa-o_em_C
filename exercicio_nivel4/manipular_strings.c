/*A função minha_strstr tenta localizar a primeira ocorrência de uma substring dentro de outra string,
 retornando o ponteiro para essa posição. Caso não encontrar, retorna NULL:

char* minha_strstr(char* string, char* substring)
Implemente a função de duas formas:

a. Acessando as posições através da posição nas strings (índice)
b. Acessando as posições utilizando apenas ponteiros*/

#include <stdio.h>
#include <string.h>

char* minha_strstr(char* string, char* substring);

int main(){
    char s1[] = "Minha string";
    char s2[] = "str";

    char* ptr = minha_strstr(s1, s2);
    if(ptr != NULL){
        printf("Encontrei no endereço %p\n" , ptr);
    }

    else{
        printf("Substring não encontrada!\n");
    }
}

char* minha_strstr(char* string, char* substring){
    int pos1;
    int pos2;
    pos1 = 0;
    while(string[pos1] != '\0'){
        pos2 = 0; 
        while(substring[pos2] != '0'){
            if (string[pos1+pos2] == string[pos2])
            {
                pos2++;
            }
            
        }
        if(substring[pos2] == '\0'){ //cheguei no final
            return &string[pos1];
        }
        pos1++;
    }
    return NULL;
    
}