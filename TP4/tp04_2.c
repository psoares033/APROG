#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x = 0, fx1 = 0, fx2 = 0, i, fx = 0;
tpp:
    printf("\nDigite o número de termos da sucessão que pretende calcular: ");
    scanf("%d", &x);
    if (x >= 15 || x <= 0)
    {
        printf("O número de termos tem que ser positivo e inferior a 15.");
        goto tpp;
    }
    for (i = 0; i < x; i++)
    {
        if (i == 1 || i == 2)
        {
            fx1 = 1;
            fx2 = 0;
        }
        fx = fx1 + fx2;
        fx2 = fx1;
        fx1 = fx;
        printf("\nF%d = %d", i + 1, fx);
    }

    return 0;
}
