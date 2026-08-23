/*Escreva um programa para um caixa de banco, que leia um valor inteiro R
 e determina o número de notas de 100, 50, 10, 5 e 1 reais necessário para pagar a quantia 
R
 . Faça de forma que o número de notas usado seja o menor possível, exibindo o resultado na tela.*/
#include <stdio.h>//serve para carregar as bibliotecas do c, como leitura e escrita na tela(printf e scanf)

//declaração da main
int main(){
//declaração das variaveis, não inicializei dessa vez porque logo usaremos elas 
int r;
int notas100, notas50, notas10, notas10, notas5, moedas1;

printf("Digite um valor inteiro ");

if (scanf("%d " , &r) == 0) //scanf lê um valor, %d indica que é um inteiro decimal, e & indica o endereço de memória onde o valor será armazenado.
{
   printf("Erro! valor invalido");

}
else {//usando as variaveis 
    notas100 = r /100;
    notas50 = r % 100 / 50;
    notas10 = r % 100 % 50 / 10;
    notas5 =  r % 100 % 50 % 10 / 5;
    moedas1 =  r % 100 % 50 % 10 % 5;

    printf("Nota(s) de 100: %d\n" , notas100);
    printf("Nota(s) de 50: %d\n" , notas50);
    printf("Nota(s) de 10: %d\n" , notas10);
    printf("Nota(s) de 5: %d\n" , notas5);
    printf("Nota(s) de 1: %d\n" , moedas1);
}

}
