#include <stdio.h>
/*biblioteca para entrada e saída de dados do programa*/
int main (){
/*função principal do programa*/
int idade;
/*declaração da variável inteira "idade"*/
printf ("Qual a sua idade? ");
scanf ("\n%d", &idade);
/*entrada dos dados*/
if (idade < 12){
    printf ("Criança");
}
else if (idade >= 12 && idade <=17){
    printf ("Adolescente");
}
else {
    printf ("Adulto");
}
/*condições para a verificação e classificação das idades*/
    return 0;
} 