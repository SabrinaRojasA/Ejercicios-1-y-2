/*
 ============================================================================
SABRINA ROJAS 1D
Ejercicio 2-3: *
Usando el concepto de operadores lógicos booleanos en el condicional.
Solicitar un número al usuario e informar si el número es par o impar.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
		setbuf(stdout, NULL);

	    int numero;

	    printf("Ingrese un numero: ");
	    scanf("%d", &numero);

	    if(numero % 2 == 0)
	    {
	      printf("El numero %d es Par.", numero);
	    }
	    else
	    {
	        printf("El numero %d es Impar.", numero);
	    }


	    return 0;

}
