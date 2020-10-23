#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x, y, z, a, b;
    printf("Introduza o primeiro valor: ");
    scanf("%d", &x);
    printf("Introduza o segundo valor: ");
    scanf("%d", &y);
    if (y <= x)
    {
        printf("Erro de leitura, valores não estritamente crescentes!");
        return 0;
    }
    printf("Introduza o terceiro valor: ");
    scanf("%d", &z);
    if (z <= y)
    {
        printf("Erro de leitura, valores não estritamente crescentes!");
    }
    else
    {
        a = z - y;
        b = y - x;
        printf("Diferença entre o terceiro algarismo e segundo: %d", a);
        printf("\nDiferença entre o segundo algarismo e primeiro %d", b);
    }
    return 0;
}
