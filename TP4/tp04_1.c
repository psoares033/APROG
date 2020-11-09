#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int a = 0, b = 0, c = 0, x = 0, y = 0, z = 0;
    printf("Digite o valor do coeficiente a: ");
    scanf("%d", &a);
    if (a == 0)
    {
        printf("Não é equação de segundo grau.");
        return 0;
    }
    printf("\nDigite o valor do coeficiente b: ");
    scanf("%d", &b);
    printf("\nDigite o valor do coeficiente c: ");
    scanf("%d", &c);

    z = (b * b) - (4 * a * c);
    x = (-b + sqrt(z)) / (2 * a);
    y = (-b - sqrt(z)) / (2 * a);

    if (z < 0)
    {
        printf("Não ha solução real.");
    }
    else if (z == 0)
    {
        printf("Apresenta uma solução.");
    }
    else if (z > 0)
    {
        printf("Apresenta duas raízes reais x = %d v x = %d.", x, y);
    }
    else if (x == y)
    {
        printf("Apresenta uma raíz dupla x = %d v x = %d.", x, y);
    }
    return 0;
}
