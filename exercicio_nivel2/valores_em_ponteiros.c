/*Escreva uma função para um caixa de banco, que recebe um valor inteiro 
R e determina o número de notas de 100, 50, 10, 5 e 1 reais necessário para pagar a quantia 
R. Faça de forma que o número de notas usado seja o menor possível, retornando as quantidades de notas por referência.*/

#include <stdio.h> //biblioteca do c que permite funções como printf e scanf

//declaração da função, sempre bom declarar, a função recebe o endereços das variáveis onde serão colocadas as quantidades de notas. 
void troco(int v, int * n100, int * n50, int * n10, int *n5, int *n1); 
int main(){
    

    int  valor = 0, notas100 = 0, notas50 = 0, notas10 = 0, notas5 = 0, moedas1 = 0; //declaração e inicialização da variaveis

    printf("Digite um valor inteiro"); //exibe na tela 

    scanf("%d " , &valor); //captura um valor, %d → indica que é um int, &valor → indica o endereço de memória da variável valor

    //chamo a função e passo o endereço das variaveis do main
    troco( valor, &notas100, &notas50, &notas10, &notas5, &moedas1);
    //mostra o resultado
    printf("Nota(s) de 100: %d\n" , notas100);
    printf("Nota(s) de 50: %d\n" , notas50);
    printf("Nota(s) de 10: %d\n" , notas10);
    printf("Nota(s) de 5: %d\n" , notas5);
    printf("Nota(s) de 1: %d\n" , moedas1);

}

//implementando a função que declarada anteriormente
void troco(int valor, int *notas100, int * notas50, int *notas10, int *notas5, int *moedas1){
    *notas100 = valor /100; //notas100 = endereço da variavel, *notas100 = valor armazenado naquele endereço
    *notas50 = valor % 100 / 50; //notas50 = endereço da variavel, *notas50 = valor armazenado naquele endereço
    *notas10 = valor % 100 % 50 / 10; //notas10 = endereço da variavel, *notas10 = valor armazenado naquele endereço
    *notas5 =  valor % 100 % 50 % 10 / 5; //notas5 = endereço da variavel, *notas5 = valor armazenado naquele endereço
    *moedas1 =  valor % 100 % 50 % 10 % 5; //moedas1 = endereço da variavel, *moedas1 = valor armazenado naquele endereço
}
