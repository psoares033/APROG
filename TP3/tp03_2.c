#include <stdio.h>

int main()
{
	int i, nota = 0, nota_positiva = 0;
	float percentagem_positiva, n_positivos = 0, n = 0, nota_negativa = 0, media_negativa = 0, n_negativos = 0;

tpp:
	printf("Quantos alunos tem a turma: ");
	scanf("%f", &n);
	if (n <= 0)
	{
		printf("\\nInsira um número válido!");
		goto tpp;
	}

	for (i = 0; i < n; i++)
	{
		printf("Que nota teve na disciplina: ");
		scanf("%d", &nota);

		if (nota >= 9.5 && nota <= 20)
		{
			nota_positiva = nota_positiva + nota;
			n_positivos = n_positivos + 1;
		}
		else if (nota < 9.5 && nota >= 0)
		{
			nota_negativa = nota_negativa + nota;
			n_negativos = n_negativos + 1;
		}
	}
	media_negativa = (nota_negativa / n_negativos);
	percentagem_positiva = n_positivos / n * 100;
	printf("\nA percentagem de notas positivas é: %f", percentagem_positiva);
	printf("\nA média de notas negativas e: %f", media_negativa);

	return 0;
}