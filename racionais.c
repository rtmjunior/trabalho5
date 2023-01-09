/*
* Arquivo: racionais.c
* Autor: Rodrigo Tarrega Martins Júnior
* Matrícula: 12121ETE007
* Criado em: 08/01/2022
*/

#include  <stdio.h>
int  mdc ( int a, int b);
typedef
    struct racionais
    {
        int num, den;
    }
racionais;

racionais soma (racionais prim, racionais sec);
subtração racionais (racionais prim, racionais sec);
multiplicação racionais (racionais prim, racionais sec);
divisão racionais (racionais prim, racionais sec);


int  principal ( vazio ){
    racionais primeiro;
    racionais segundo;
    printf ( " Prdeneiro numional(num num_i): " );
    scanf ( " %d  %d " , &primeiro. num , &primeiro. den );
    printf ( " Segundo numional(num num_i): " );
    scanf ( " %d  %d " , &segundo. num , &segundo. den );
    int mdc1 = mdc (primeiro. num , primeiro. den ), mdc2 = mdc (segundo. num , segundo. den );
    se (mdc1== 0 ) mdc1 = 1 ;
    se (mdc2== 0 ) mdc2 = 1 ;
    primeiro. den = primeiro. den /mdc1; primeiro. num = primeiro. num /mdc1;
    segundo. den = segundo. den /mdc2; segundo. num = segundo. num /mdc2;
    racionais soma1 = soma (primeiro, segundo);
    racionais sub = subtração (primeiro, segundo);
    racionais multi = multiplicação (primeiro, segundo);
    racionais div = divisão (primeiro, segundo);


    
    printf ( " %d / %d  " , primeiro. num , primeiro. den );
    printf ( " %d / %d  " , segundo. num , segundo. den );
    printf ( " %d / %d  " , soma1. num , soma1. den );
    printf ( " %d / %d  " , sub. num , sub. den );
    printf ( " %d / %d  " , multi. num , multi. den );
    printf ( " %d / %d \n " , div . num , div . den );
    
    
    
    
    retorna  0 ;
}


int  mdc ( int a, int b){
    se (b== 0 ) retorna a;
    mdc (b, a%b);
}


racionais soma (racionais prim, racionais sec){
    resultados racionais;
    resultado. den = primo. den *seg. covil ;
    resultado. num = primo. num *seg. den +seg. num *prim. covil ;
    int mdcRes = mdc (resultado. num , resultado. den );
    resultado. den = resultado. den /mdcRes; resultado. num = resultado. num /mdcRes;
    if (resultado. den < 0 ){
        resultado. den = resultado. den *(- 1 ); resultado. num = resultado. num *(- 1 );
    }
    resultado de retorno ;
}

racionais subtração (racionais prim, racionais sec){
    resultados racionais;
    resultado. den = primo. den *seg. covil ;
    resultado. num = primo. num *seg. den -sec. num *prim. covil ;
    int mdcRes = mdc (resultado. num , resultado. den );
    resultado. den = resultado. den /mdcRes; resultado. num = resultado. num /mdcRes;
    if (resultado. den < 0 ){
        resultado. den = resultado. den *(- 1 ); resultado. num = resultado. num *(- 1 );
    }
    resultado de retorno ;
}

multiplicação racionais (racionais prim, racionais sec){
    resultados racionais;
    resultado. den = primo. den *seg. covil ;
    resultado. num = primo. num *seg. num ;
    int mdcRes = mdc (resultado. num , resultado. den );
    resultado. den = resultado. den /mdcRes; resultado. num = resultado. num /mdcRes;
    if (resultado. den < 0 ){
        resultado. den = resultado. den *(- 1 ); resultado. num = resultado. num *(- 1 );
    }
    resultado de retorno ;
}

divisão racionais (racionais prim, racionais sec){
    resultados racionais;
    resultado. den = primo. den *seg. num ;
    resultado. num = primo. num *seg. covil ;
    int mdcRes = mdc (resultado. num , resultado. den );
    resultado. den = resultado. den /mdcRes; resultado. num = resultado. num /mdcRes;
    if (resultado. den < 0 ){
        resultado. den = resultado. den *(- 1 ); resultado. num = resultado. num *(- 1 );
    }
    resultado de retorno ;
}