/*
* Arquivo: cadastro.c
* Autor: Rodrigo Tarrega Martins Júnior
* Matrícula: 12121ETE007
* Criado em: 08/01/2022
*/

# define  n  1024
# include  < stdio.h >
const  char strmes[ 13 ][ 4 ] = {
    " " , " JAN " , " FEV " , " MAR " , " ABR " , " MAI " , " JUN " ,
    " JUL " , " AGO " , " SET " , " OUT " , " NOV " , " DEZ "
};
void  pega_str ( char * str, int num);
void  pega_niver ( char * str, int num);


typedef
    dados de estrutura
    {
        int dia, mes, ano;
    }
Dados;
typedef 
    comprimento da estrutura
    {
        int metros, centímetros;
    }
comprimento;
typedef
    estrutura pessoa
    {
        char nome1[n];
        char nome2[n];
        Datas de aniversário;
        peso flutuante ;
        comprimento altura;

    }
pessoa;


int  principal ( vazio ){
    int num;
    caracter claro[ 2 ];
    printf ( " Quantas pessoas: " );
    scanf ( " %d " , &num);
    pessoa lista[num];
    pega_str (claro, 2 );
    for ( int i = 0 ; i<num; i++){
        for ( int j = 0 ; j < n; j++){
            lista[i]. nome1 [j] = 0 ;
            lista[i]. nome2 [j] = 0 ;
        }
        scanf ( " %s  %s  %d / %d / %d  %d . %d  %f " , &lista[i]. nome1 , &lista[i]. nome2 , &lista[i]. aniversario . dia ,&lista[i ] . aniversario .mes , & lista [ i ] .aniversario .ano , & lista [ i ] .
        while (lista[i]. altura . centimetros < 10 || lista[i]. altura . centimetros > 99 )
        {
            if (lista[i]. altura . centimetros < 10 ){
                lista[i]. altura . centímetros = lista[i]. altura . centímetros * 10 ;
            }
            if (lista[i]. altura . centimetros > 99 ){
                lista[i]. altura . centímetros = lista[i]. altura . centímetros / 10 ;
            }
        }
        


        /* *pega_str(lista[i].nome, n);
        printf("%s ", lista[i].nome);
        //baguncinha pra pegar o aniversario
        char c = 0;
        dados char[12];
        dados[11] = 0;
        int j = 0;
        c = getchar();
        while(c!=' '){
            dados[j] = c;
            c = getchar();
            j++;
        }dados[j] = 0;
        //transformando um data na struct
        j = 0;
        int barras = 0;
        enquanto (dados[j])
        {
            if(dados[j]=="/"){
                barras++;
            }
            j++;
        }
        
        //dados salva em str, dedica a eles depois
        
        //baguncinha pra altura
        char alturam[5];
        alturam[4] = 0;
        j = 0;
        c= getchar();
        while(c!=' '){
            if(j<4){
                alturam[j] = c;
            }
            c = getchar();
            j++;
        }
        
        //baguncinha pra peso
        char pesom[5];
        pesom[4] = 0;
        j = 0;
        c= getchar();
        while(c!='\n'){
            if(j<4){
                pesom[j] = c;
            }
            c = getchar();
            j++;
        }
        printf("%s", pesom);* */
    }
    
    for ( int i = 0 ; i<num; i++){
        printf ( " %s  %s ; " , lista[i]. nome1 , lista[i]. nome2 );
        printf ( " %02d%s%04d ; " , lista[i]. aniversário . dia , strmes[lista[i]. aniversário . mes ], lista[i]. aniversário . ano );
        printf ( " %d m %02d ; " , lista[i]. altura . metros , lista[i]. altura . centimetros );
        printf ( " %.1f kg \n " , lista[i]. peso );
    }
    retornar  1 ;
}


void  pega_str ( char * str, int num){
    caractere c;
    int eu;
    espaço int = 0 ;
    for (i = 0 ; i < num; i++){
        c = getchar ();

        if (c!= ' \n ' ){
            if (c== '  ' ){
                espaço++;
            }
            if (espaço == 2 ){
                str[i] = ' \0 ' ;
                quebrar ;
            }
            str[i] =c;
        } senão {
            str[i] = ' \0 ' ;
            quebrar ;
        }
    }

}

void  pega_niver ( char * str, int num){
    caractere c;
    int eu;
    espaço int = 0 ;
    para (i = 0 ; i < 9 ; i++){
        c = getchar ();

        if (c!= ' \n ' ){
            if (c== '  ' ){
                espaço++;
            }
            if (espaço == 1 ){
                str[i] = ' \0 ' ;
                quebrar ;
            }
            str[i] =c;
        } senão {
            str[i] = ' \0 ' ;
            quebrar ;
        }
    }
}