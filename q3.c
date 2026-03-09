#include <stdio.h>
/* biblioteca para entrada e saída de dados do programa */
int main (){
/* função principal do programa */
int x, y;
/* variáveis do tipo inteiro */
printf ("Insira dois números inteiros: ");
scanf ("\n%d %d", &x, &y);
/*Entrada dos dados */
int soma;
/*variável da soma de inteiros*/
soma = x + y;
/*operação de soma */
printf ("Resultado: %d", soma);
/* saída dos dados */
    return 0;
}