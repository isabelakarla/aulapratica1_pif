#include <stdio.h>
/*biblioteca para entada e saída de dados do programa*/
int main (){
  /*função princpal do programa*/
  int num;
  /*declaração da variável inteira "num"*/
  scanf ("%d", &num);
  /*entrada dos dados*/
  if (num != 0){
  /*condição usada para saber se o número digitado pelo usuário é == ou != de 0*/
    printf ("o número pode ser dividido, pois é diferente de 0");
  }
  else {
   printf ("o número ZERO não pode ser utilizado nesta divisão, tente outro número");
  }
  /*saída dos dados*/
    return 0;
}