/*
 ============================================================================
 SABRINA ROJAS 1D
 Ejercicio 2-6 *
Ingresar 5 caracteres e informar cuantas letras m (minúsculas) se ingresaron.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	setbuf(stdout, NULL);

	int i;
	char caracter;
	int contadorLetra_m;

	contadorLetra_m = 0;

	for(i=0; i < 5; i++)
	{
		printf("Ingrese un caracter: ");
		fflush(stdin);
		scanf("%c", &caracter);

		if(caracter == 'm')
		{
			contadorLetra_m ++;
		}
	}//Fin For

	printf("Se ingresaron %d letras m.", contadorLetra_m);

	return 0;
}
