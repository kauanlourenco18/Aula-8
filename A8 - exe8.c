#include <stdio.h>

int testa_par(int x) {
  return x % 2 == 0;
   printf("%d é par?: 1", x); 
   printf("%d é par?: 0", x); 
}  

int main(void) {
  int resultado = testa_par(4);

  printf("É par[1-Sim / 0-Não]?: %d", resultado);
}