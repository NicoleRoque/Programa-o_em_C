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
    char *ptr1;
    char *ptr2;
    ptr1 = string; //aponta para o inicio da string
    while(*ptr1 != '\0'){
         
        ptr2 = substring; //aponta para o inicio da substring
        int* aux = ptr1;
        while(*ptr2 != '0' && *aux != '\0'){
            printf("%c <-> %c\n " , *aux , *ptr2);
            if (*aux == *ptr2)
            {
                printf("Achei! \n");
                ptr2++;
                aux++;
            }
            
        }
        if(*ptr2 == '\0'){ //cheguei no final
            return ptr1;
        }
        ptr1++;
    }
    return NULL;
    
}