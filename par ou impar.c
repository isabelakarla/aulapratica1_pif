#include <stdio.h>
/*biblioteca para entrada e saída de dados do programa  */
int main (){
/*função principal do programa*/
    int num;
/*declaração da variável inteira "num"*/
    scanf ("%d", &num);
/*entrada dos dados*/
    if (num % 2 == 0){
    /*condição para verificar se o número digitado pelo usuário é par ou ímpar*/
    printf ("PAR");
    }
    else {
        printf ("ÍMPAR");
    }
}