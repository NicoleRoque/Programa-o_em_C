/*Escreva um programa que receba um tempo em total de segundos desde a meia-noite,
 exibindo o tempo em horas, minutos e segundos correspondentes*/
 #include <stdio.h>
 //declarar a main
 int main(){
    //declaração da variaveis não inicializei dessa vez porque logo usaremos elas
    int tempo;
    int horas, minutos, segundos;

    printf("Digite o tempo total em segundos");

    if(scanf("%d " , &tempo) == 0){//scanf lê um valor, %d indica que é um inteiro decimal, e & indica o endereço de memória onde o valor será armazenado
        printf("Erro! valor digitado inválido");
    }
    else{
        horas = tempo / 3600;
        minutos = tempo % 3600 / 60;
        segundos= tempo %3600 % 60;

        //o printf pede que o primeiro elemento dentro do parentese seja um texto "entre as aspas"
        printf("horas %d\n " , horas);
        printf("minutos %d\n " , minutos);
        printf("segundos %d\n " , segundos);
    }

 }