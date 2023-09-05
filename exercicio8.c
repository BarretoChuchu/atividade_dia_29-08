#include <stdio.h>

int main()
{
    int idade, tempo_servico;

    // Solicite ao usuário que insira a idade e o tempo de serviço
    printf("Digite a idade do trabalhador: ");
    scanf("%d", &idade);
    printf("Digite o tempo de serviço do trabalhador em anos: ");
    scanf("%d", &tempo_servico);

    // Verifique se o trabalhador pode se aposentar
    if (idade >= 65 || tempo_servico >= 30 || (idade >= 60 && tempo_servico >= 25))
    {
        printf("O trabalhador pode se aposentar.\n");
    }
    else
    {
        printf("O trabalhador não pode se aposentar.\n");
    }

    return 0;
}