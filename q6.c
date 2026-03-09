#include <stdio.h>
/* biblioteca para entrada e saída de dados do programa */
int main (){
/* função principal do programa */
double valor_m, valor_cm;
/* declaração das varíaveis em dupla precisão */
printf ("CONVERSOR | METROS - CENTÍMETROS");
scanf ("\n%lfm", &valor_m);
/* entrada dos dados */
valor_cm = valor_m * 100;
/* operação para a conversão */
printf ("%.0lfcm", valor_cm);
/* impressão da saída dos dados */
    return 0;
}