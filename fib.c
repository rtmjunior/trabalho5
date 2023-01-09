/*
* Arquivo: fib.c
* Autor: Rodrigo Tarrega Martins Júnior
* Matrícula: 12121ETE007
* Criado em: 08/01/2022
*/

#include  <stdio.h>

int  fibonacci ( int a);

int  principal ( vazio ){
    int a;
    printf ( " Digite um numero: " );
    scanf ( " %d " , &a);
    int resultado = fibonacci (a);
    printf ( " %d \n " , resultado);
    
    retornar  1 ;
}

int  fibonacci ( int a){
    se (a == 0 ) retorna  0 ;
    se (a == 1 || a == 2 ) retorna  1 ;
    retornar  fibonacci (a- 1 )+ fibonacci (a- 2 );
}