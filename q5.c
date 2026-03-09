#include <stdio.h>
/*biblioteca para entrada e saída de dados do programa */
int main (){ 
/* função principal do programa */
float base, altura, area;
/* declaração das variáveis em ponto flutuante */
printf ("Base: ");
scanf ("%f", &base);
printf ("Altura: ");
scanf ("%f", &altura);
/*entrada dos dados */

area = base * altura;
/*operação da área do retângulo*/
printf ("Área: %.1f", area);
/*saída dos dados */
return 0;
}