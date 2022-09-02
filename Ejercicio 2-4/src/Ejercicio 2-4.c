/*
 ============================================================================
 SABRINA ROJAS ADORNO 1D
Ejercicio 2-4: *
Ingresar 8 números enteros, distintos de cero. Mostrar:
a. El menor número ingresado.
b. De los pares el mayor número ingresado.
c. Producto de los negativos.
d. En qué lugar fue ingresado el mayor numero
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	setbuf(stdout, NULL);

	int i;
	int numero;
	//a
	int minimoNumero;
	//b
	int mayorPar;
	int banderaPar;
	//c
	int producto;
	//d
	int mayorNumero;
	int posicion;

	//b
	banderaPar = 0;
	//c
	producto = 1;

	for(i=0; i<8; i++)
	{
		printf("Ingrese un numero: ");
		scanf ("%d", &numero);

		while(numero == 0)
		{
			printf("Reingrese un numero: ");
			scanf ("%d", &numero);
		}

		//a
		if(numero < minimoNumero || i == 0)
		{
			minimoNumero = numero;
		}
		//b
		if(numero % 2 == 0)
		{
			if(numero > mayorPar || banderaPar == 0)
			{
				mayorPar = numero;
				banderaPar = 1;
			}
		}
		//c
		if(numero < 0)
		{
			producto = producto * numero;
		}
		//d
		if(numero > mayorNumero || i == 0)
		{
			mayorNumero = numero;
			posicion = i+1;
		}
	}

	//a
	printf("\nEl numero minimo ingresado es: %d \n", minimoNumero);
	//b
	if(banderaPar == 1)
	{
		printf("El mayor numero Par es: %d \n", mayorPar);
	}
	else
	{
		printf("No hay numeros pares. \n");
	}

	//c
	if(numero < 0)
	{
		printf("El producto de los negativos es: %d \n", producto);
	}
	else
	{
		printf("No se ingresaron numeros negativos \n");
	}

	//d
	printf("El mayor numero ingresado es: %d y fue en la posicion %d .", mayorNumero, posicion);


	return 0;
}
