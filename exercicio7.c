#include <stdio.h>

int main()
{
    float nota1, nota2, nota3;
    float media;

    // Solicite ao usuário que insira as notas das 3 provas
    printf("Digite a nota da primeira prova: ");
    scanf("%f", &nota1);
    printf("Digite a nota da segunda prova: ");
    scanf("%f", &nota2);
    printf("Digite a nota da terceira prova: ");
    scanf("%f", &nota3);

    // Calcule a média ponderada
    media = (nota1 + nota2 + (nota3 * 2)) / 4.0;

    // Verifique se o aluno foi aprovado ou reprovado
    if (media >= 7.0)
    {
        printf("A média do aluno é %.2f, e ele foi aprovado!\n", media);
    }
    else
    {
        printf("A média do aluno é %.2f, e ele foi reprovado.\n", media);
    }

    return 0;
}