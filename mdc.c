/*
* Arquivo: mdc.c
* Autor: Rodrigo Tarrega Martins Júnior
* Matrícula: 12121ETE007
* Criado em: 08/01/2022
*/

#include  <stdio.h>

int  mdc ( int a, int b);

int  principal ( vazio ){
    int a;
    int b;
    printf ( " Digite 2 numeros: " );
    scanf ( " %d  %d " , &a, &b);
    int resultado = mdc (a, b);

    printf ( " %d \n " , resultado);


    retornar  1 ;
}

int  mdc ( int a, int b){

    se (b== 0 ) retorna a;
    mdc (b, a%b);
}