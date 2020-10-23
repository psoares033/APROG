#include <stdio.h>

int main(int argc, char const *argv[])
{
    int v1, v2, v3;
    v1 = 0;
    v2 = 0;
    v3 = 0;
    printf("Introduza o 1º valor\n");
    scanf("%d", &v1);
    printf("Introduza o 2º valor\n");
    scanf("%d", &v2);
    printf("Introduza o 3º valor\n");
    scanf("%d", &v3);

    if (v1 < v2 + v3 && v2 < v1 + v3 && v3 < v1 + v2)
    {
        printf("O triângulo é possível e");
    }
    else
    {
        printf("O triângulo não é possível !\n");
        return 0;
    }

    if (v1 == v2 && v2 == v3)
    {
        printf(" é equilátero !\n");
    }

    else if (v1 != v2 && v2 != v3 && v1 != v3)
    {
        printf(" é escaleno !\n");
    }

    else
    {
        printf(" é isósceles !\n");
    }

    return 0;
}