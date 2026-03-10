#include <stdio.h>
/*bilioteca para entrada e saída de dados do programa*/
int main (){
  /*função principal do programa*/
 char letra;
 /*declaração da varíavel de caracter*/
 scanf ("%c", &letra);
 /*entrada dos dados*/
 if (letra == 'a' || letra == 'A'){
  /*condição para saber se a letra é maiúscula ou minúscula*/
   printf ("a letra %c é (maiúscula ou minúscula)!", letra);
  /*saída dos dados*/
  }

 return 0;

}
/*REFAZER 