#include <stdio.h>

main()
{

    int A = 1, B = 2, C = 3, D = 4;

    if (A > B && A > C && A > D)
    {
        printf("A é o maior");
        // achar o menor entre B, C e D
        if (B < C && B < D)
        {
            printf("\nB é o menor");
        }
        else if (C < B && C < D)
        {
            printf("\nC é o menor");
        }
        else
        {
            printf("\nD é o menor");
        }
    }
    else if (B > A && B > C && B > D)
    {
        printf("B é o maior");
        // achar o menor entre A, C e D
        if (A < C && A < D)
        {
            printf("\nA é o menor");
        }
        else if (C < A && C < D)
        {
            printf("\nC é o menor");
        }
        else
        {
            printf("\nD é o menor");
        }
    }
    else if (C > A && C > B && C > D)
    {
        printf("C é o maior");
        // achar o menor entre A, B e D
        if (A < B && A < D)
        {
            printf("\nA é o menor");
        }
        else if (B < A && B < D)
        {
            printf("\nB é o menor");
        }
        else
        {
            printf("\nD é o menor");
        }
    }
    else
    {
        printf("D é o maior");
        //achar o menor entre A, B e C
        if (A < B && A < D)
        {
            printf("\nA é o menor");
        }
        else if (B < A && B < C)
        {
            printf("\nB é o menor");
        }
        else
        {
            printf("\nC é o menor");
        }
    }
}
