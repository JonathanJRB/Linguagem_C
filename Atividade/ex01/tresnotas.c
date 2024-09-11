#include <stdio.h>
#include <stdlib.h>

void	main()
{
	float	nota1, nota2, nota3, resultado;

	printf("\n Digite a primeira nota:");
	scanf("%f", &nota1);

	printf("\n Digite a segunda nota:");
	scanf("%f", &nota2);

	printf("\n Digite a terceira nota");
	scanf("%f", &nota3);

	resultado = (nota1 + nota2 + nota3) / 2;
	printf("\n A media e: %f", resultado);
}
