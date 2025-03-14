#include <stdio.h>

// Desafio de Xadrez - MateCheck
int main() {
    int i;

    printf("*** DESAFIO DE XADREZ ***\n");

 //Movimento da Torre - 5 casas para a direita
 printf("\n**Movimento da Torre**\n");
 for (i = 1; i <= 5; i++) {
    printf("Direita\n");
 }
//Movimento da Torre - 5 casas na diagonal - cima e direita
printf("\n**Movimento do Bispo**\n");
i = 1;
while (i <= 5){
    printf("Cima, Direita\n");
    i++;
}
//Movimento da Rainha - 8 casas para a esquerda
 printf("\n**Movimento da Rainha**\n");
 i = 1;
 do
 {
    printf("Esquerda\n");
    i++;
 } while (i <= 8);
 
     return 0;
}
