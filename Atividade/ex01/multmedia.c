#include <stdio.h>
#include <stdlib.h>

void	main()
{
	float	nota1, nota2, resultado;

	printf("\nDigite a primeira nota:");
	scanf("%f", &nota1);

	printf("\nDigite a segunda nota:");
	scanf("%f", &nota2);

	resultado = (nota1 * nota2) / 2;
	printf("\nA media e: %f", resultado);
}
