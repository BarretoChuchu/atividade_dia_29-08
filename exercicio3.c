#include <stdio.h>

int main()
{
    int A, B, C;

    // Solicite os valores ao usuário
    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);
    printf("Digite o valor de C: ");
    scanf("%d", &C);

    // Verifique e imprima em ordem ascendente
    if (A <= B && A <= C)
    {
        printf("%d, ", A);
        if (B <= C)
        {
            printf("%d, %d\n", B, C);
        }
        else
        {
            printf("%d, %d\n", C, B);
        }
    }
    else if (B <= A && B <= C)
    {
        printf("%d, ", B);
        if (A <= C)
        {
            printf("%d, %d\n", A, C);
        }
        else
        {
            printf("%d, %d\n", C, A);
        }
    }
    else
    {
        printf("%d, ", C);
        if (A <= B)
        {
            printf("%d, %d\n", A, B);
        }
        else
        {
            printf("%d, %d\n", B, A);
        }
    }

    return 0;
}