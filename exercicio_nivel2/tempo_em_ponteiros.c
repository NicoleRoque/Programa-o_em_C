/*Escreva uma função que receba um tempo em total de segundos desde a meia-noite,
 retornando por referência o tempo em horas, minutos e segundos correspondentes.*/

 #include <stdio.h>

 //declaração da função antes do main
 void tempoTotal(int t, int * h, int * m, int * s);
 //declaração do método principal
 int main(){
    //declaração de variaveis 
    int tempo = 0;
    int horas = 0, minutos = 0, segundos = 0;

    //exibir na tela 
    printf("Digite o tempo em segundos desde a meia-noite:");
    scanf("%d " , &tempo); //captura um valor, %d → indica que é um int, &tempo → indica o endereço de memória da variável valor

    //chamo a função e passo o endereço das variaveis no main. Assim, a função poderá modificar diretamente essas variáveis.
    tempoTotal(tempo, &horas, &minutos, &segundos);
    //exibo na tela o valor armezando dentro do endereço da variavel
    printf("horas %d\n " , horas);
    printf("minutos %d\n " , minutos);
    printf("segundos %d\n " , segundos);
    // %02d -> ocupa sempre 2 espaços, preenche com 0 à esquerda
    printf("%02d:%02d:%02d\n", horas, minutos, segundos);
 }

 //função antes declarada passando os endereços das variaveis do main
 void tempoTotal(int tempo, int *horas, int *minutos, int *segundos){
        *horas = tempo / 3600; //horas = endereço da variavel, *horas = valor armazenado naquele endereço
        *minutos = tempo % 3600 / 60; //minutos = endereço da variavel, *minutos = valor armazenado naquele endereço
        *segundos= tempo %3600 % 60; //segundos = endereço da variavel, *segundos = valor armazenado naquele endereço
 }