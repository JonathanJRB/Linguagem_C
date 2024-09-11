#include <stdio.h>
#include <stdlib.h>

void	main()
{
	//Definindo Variaveis
	float	nota1, nota2, resultado;

	//Lendo primeiro valor
	printf("\nDigite a primeira nota:");
	scanf("%f", &nota1);

	//lendo seguna nota
	printf("\nDigite a segunda nota:");
        scanf("%f", &nota2);

	//calculando e mostrando o resultado final
	resultado = (nota1 + nota2) / 2;
	printf("\nA media e: %f", resultado);
}
