#include <stdio.h>
/*biblioteca para entrada e saída de dados do programa*/

int main (){
    /*função principal do programa*/
int num;
/*declaração da variável inteira "num"*/
scanf ("%d", &num);
/*entrada dos dados*/
if (num >= 10 && num <=20){
/*condição para saber se o número digitado pelo usuário é igual ou está entre os números 10 e 20*/
    printf ("Este número está dentro do requisito desejado!");
}
else {
    printf ("Este número não está dentro do requisito desejado! Tente novamente ");
}
    return 0;
}