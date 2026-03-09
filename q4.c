#include <stdio.h>
/* biblioteca para entrada e saída de dados do programa */
int main (){
/* função principal do programa */
    float nota1, nota2, nota3, media;
/*declaração das variáveis em ponto flutuante*/
    scanf ("%f %f %f", &nota1, &nota2, &nota3);
/*entrada dos dados*/
    media = (nota1 + nota2 + nota3) / 3;
/*operação da média aritmética (soma de todas as notas dividida por 3)*/
    printf ("Média = %.1f", media);
 /*saída dos dados */   
    return 0;
}