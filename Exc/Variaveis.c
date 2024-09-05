#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void    main()
{
    //Permite usar acentos
    setlocale(LC_ALL,"");

    //Imprime Ola
    printf("Olá");

    int a = 50;
    int	b = 6;
    printf("%d", a + b);
    printf("O valor de a é = %d", a);
}
