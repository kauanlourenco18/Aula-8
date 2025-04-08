#include <stdio.h>

int main(void) {
   int num = 0;
   int contador = 1;
   int fim = 3;
    
do {
   printf("Digite seu palpite: ");
   scanf("%d", &num);
   getchar();
   
   if( num == 7) {
       puts("Você ganhou!");
       contador = 3;
   }else {
       printf("Número errado. Tentativas restantes: %d\n", fim - contador);
   }
   if(fim - contador == 0) {
           printf("Fim de jogo\n");
   }       
   printf("Palpite:%d\n", num);
    contador++;

} while( contador <= 3 );
   
    return 0;
}