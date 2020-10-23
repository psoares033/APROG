#include <stdio.h>

int main(int argc, char const argv[])
{
    float c1, c2, c3, tc, d, ve;

    c1=1;
    c2=2;
    c3=3;

    printf("Introduza o valor da encomenda: ");
    scanf("%f", &ve);
tpp:
    printf("Qual o seu tipo de cliente? (normal -> 1 / frequente -> 2 / especial -> 3) \n");
    scanf("%f", &tc);


        if(tc==1)
        {
        d=ve;
        printf("Não terá desconto! Valor da compra: %f ", d);
        }

        if(tc==2)
        {
        d = ve - (ve*0.1);
        printf("Obrigado por ser um cliente frequente.\nTerá um desconto de 10 por cento! Valor da compra: %f ", d);
        }

        if(tc==3)
        {
        d = ve - (ve*0.2);
        printf("Obrigado por ser um cliente especial.\nTerá um desconto de 20 por cento! Valor da compra: %f ", d);
        }

        if (tc !=1 && tc !=2 && tc !=3)
    {
        printf("ERRO !!!! Cliente desconhecido.\nSelecione corretamente o tipo de cliente ! \n");
        goto tpp;
    }

    return 0;
}