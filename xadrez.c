// Desafio de Xadrez - MateCheck
int main() {
    int i, j;

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
 
//Movimento do Cavalo - 2 casas para baixo e 1 para esquerda
//Estrutura aninhada for
printf("\n**Movimento do Cavalo**\n");
for (i = 1; i <= 2; i++) {
   printf("Baixo\n");
}
for (j = 1; j <= 1; j++){
   printf("Esquerda");
   printf("\n");
}
     return 0;
}
