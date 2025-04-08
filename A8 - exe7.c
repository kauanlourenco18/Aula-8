#include <stdio.h>

int main() {
    int n1, n2, n3, n4;
    
    printf("Digite um número inteiro[0-10]: ");
    scanf("%d", &n1);
     
    printf("Digite um número inteiro[0-10]: ");
    scanf("%d", &n2);

    printf("Digite um número inteiro[0-10]: ");
    scanf("%d", &n3);
    
    printf("Digite um número inteiro[0-10]: ");
    scanf("%d", &n4);
    
    printf("\n");
    for (int i = 0; i < n1; i++) 
    printf("*");
    printf("\n");
    for (int i = 0; i < n2; i++) 
    printf("*");
    printf("\n");
    for (int i = 0; i < n3; i++) 
    printf("*");
    printf("\n");
    for (int i = 0; i < n4; i++) 
    printf("*");
    printf("\n");
    
    return 0;
}
