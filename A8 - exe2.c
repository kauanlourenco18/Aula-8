#include <stdio.h>

int main(void) { 
    int numero, soma = 0;
    
printf("Digite um número de [1 a 6]:\n");

while (1) { 
    
    printf("Digite o valor do dado: ");
    scanf("%d", &numero);
    
    if (numero < 1 || numero > 6) { 
        printf("Número inválido! Digite um valor entre 1 e 6.\n"); 
        continue; 
    } 
        if (numero % 2 == 0) { 
            soma += numero; 
        } else {
           break;
        } 
} 
printf("Fim do jogo!\n Soma dos números pares: %d\n", soma); 

return 0; 
}