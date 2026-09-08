#include <stdio.h>
//TERMINAR
typedef struct { // o typedef é usado para declarar que daremos um nome ao Struct neste caso "aluno" este nome é declarado no final do struct
    //variaveis não inicializadas, guardam lixo na memoria 
    float p1;
    float p2;
    float trab;
    int faltas;
}Aluno; //nome do struct


void exibeAlunoPtr(const Aluno* a); //colocamos o const para não deixar o valor do ponteiro ser alterado 

int main(){
    Aluno a1, a2;

    a1.p1 = 8;
    a1.p2 = 7.5;
    a1.trab = 4;
    a1.faltas = 4;

    a2.p1 = 10;
    a2.p2 = 6.6;
    a2.trab = 5;
    a2.faltas = 1;

    printf("Aluno \n "  );
    //exibe as informações do aluno 1
    printf("aluno 1 \n");
    exibeAlunoPtr(&a1);
    //exibe as informações do aluno 2
    printf("aluno 2 \n");
    exibeAlunoPtr(&a2);
    
}

void exibeAlunoPtr(const Aluno* a){
    
    printf("prova 1%f\n" ,(*a).p1); //*a.p1 não funciona porque o ponto(.) tem prioridade pna leitura inves de * por isso usamos o (*a).p1
    printf("prova 2%f\n" , a ->p2); //o a ->p2 é a mesma coisa que (*a).p2 mas o a ->p2 é muito mais utilizado
    printf("faltas%f\n" , (*a).faltas);
}

