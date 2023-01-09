/*
* Arquivo: aproxpi.c
* Autor: Rodrigo Tarrega Martins Júnior
* Matrícula: 12121ETE007
* Criado em: 08/01/2022
*/

#include  <stdio.h>

double  aproximadora ( int n);


int  principal ( vazio ){
    int n;
    printf ( " Digite um numero: " );
    scanf ( " %d " , &n);

    printf ( " %lf \n " , aproximadora (n));

    retorna  0 ;
}

double  aproximadora ( int n){
    se (n == 0 ) retornar  4 ;
    if (n% 2 ) return  aproximadora (n- 1 ) -( double ) 4 /( 2 *n+ 1 ); else  return  aproximadora (n- 1 ) +( double ) 4 /( 2 *n+ 1 );
}