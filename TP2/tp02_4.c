#include <stdio.h>

int main(int argc, char const *argv[])
{
    float peso, imc, altura;
    printf("Introduza o seu peso: ");
    scanf("%f", &peso);
    printf("\nIntroduza a sua altura: ");
    scanf("%f", &altura);
    imc = peso / (altura * altura);
    if (imc < 17)
    {
        printf("\nMuito abaixo do peso normal.");
    }
    else if (17 <= imc && imc < 18.5)
    {
        printf("\nAbaixo do peso normal.");
    }
    else if (18.5 <= imc && imc < 25)
    {
        printf("\nPeso normal.");
    }
    else if (25 <= imc && imc < 30)
    {
        printf("\nAcima do peso normal.");
    }
    else if (30 <= imc && imc < 35)
    {
        printf("\nObesidade.");
    }
    else if (35 <= imc && imc < 40)
    {
        printf("\nObesidade severa.");
    }
    else
    {
        printf("\nObesidade mórbida.");
    }

    return 0;
}
