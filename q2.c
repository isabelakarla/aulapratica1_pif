#include <stdio.h>
/* biblioteca para entrada e saída de dados do programa*/

int main (){
    /* função principal do programa */
    int x = 5 + 2 * 3;
    /* variável do tipo inteiro */
    printf("X = %d", x);
    /* impressão do resultado */
    if (x == 11) {
        /* verificação do resultado com if/else */
        printf ("\nResultado esperado! :)");
    } else {
        printf ("\nResultado incorreto! a resposta correta é 11 ");
    }
    return 0;
}