#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main(int argc, char* argv[]){

    Objeto o1;
    Objeto o2;
    Objeto o3;
    Objeto o4;
    Objeto* o;
    o1.valor = 'A';
    o2.valor = 'B';
    o3.valor = 'C';
    o4.valor = 'D';
    Pilha* P = pilha();
    empilhar(&o1, P);
    empilhar(&o2, P);
    empilhar(&o3, P);
    empilhar(&o4, P);
    do{
        o = desempilhar(P);
        if(o != NULL){
            printf("%c\n", o->valor);
        }
    }while(o != NULL);

    exit(0);
}