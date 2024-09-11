#include <stdio.h>
#include <stdlib.h>

void	main()
{

	int	nota1, nota2;

	printf("\n Digite a primeira nota:");
	scanf("%d", &nota1);

	printf("\n Digite a segunda nota:");
	scanf("%d", &nota2);

	printf("\n A diferenca entre os dois e: %d", abs(nota1 - nota2) );
}
