#include <stdio.h>
/*biblioteca para entrada e saída de dados do programa */
int main (){
/*função principal do programa*/
int x, y, resto_divisao;
/*declaração das variáveis inteiras*/
printf ("Entrada: ");
scanf ("%d %d", &x, &y);
/*entrada dos dados*/
resto_divisao = x % y;
/*operação para encontrar o resto da divisão (módulo)*/
printf ("Resto: %d", resto_divisao);
/*saída dos dados*/
    return 0;
}