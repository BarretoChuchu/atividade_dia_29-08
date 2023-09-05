#include <stdio.h>

int main()
{
    int numero;

    // Solicite ao usuário que digite um número
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    // Verificar se o número é par
    if (numero % 2 == 0)
    {
        printf("O número digitado é par.\n");
    }

    return 0;
}