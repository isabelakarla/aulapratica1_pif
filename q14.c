#include <stdio.h>
/*biblioteca usada para entrada e saída de dados do programa*/
int main (){
    /*função principal do programa*/
    int idade;
    char tem_cnh;
    /*declaração das variáveis do tipo int e char*/

    scanf ("%c %d", &tem_cnh, &idade);
    /*entrada dos dados*/
if (tem_cnh == 's' && idade >= 18){
    /*condição para verificar se os dados digitados pelo usuário estão dentro dos requisitos*/
        printf ("Você está liberado para dirigir!");
    }
else {
    printf ("Você NÃO pode dirigir.");
}
/*saída dos dados*/
    return 0;
}