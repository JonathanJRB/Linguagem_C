#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void    main()
{
    //Permite usar acentos
    setlocale(LC_ALL,"");

    //Imprime Ola
    printf("Olá");

    int a   = 5;
    printf("%d", a);
    
}
