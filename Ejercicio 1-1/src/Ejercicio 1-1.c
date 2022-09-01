/*
 ============================================================================
SABRINA ROJAS 1D *
Ejercicio 1-1: Ingresar dos números enteros entre -50 y 100, sumarlos y mostrar el
resultado. Ejemplo: Si ingresamos 3 y 2 el programa mostrará: “La suma entre 3 y 2
da como resultado 5”
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	setbuf(stdout, NULL);

	int numeroUno;
	int numeroDos;
	int suma;

	printf("Ingrese un numero: ");
	scanf("%d", &numeroUno);

	printf("Ingrese un numero: ");
	scanf("%d", &numeroDos);

	suma = numeroUno + numeroDos;

	printf("El resultado de la suma de %d mas %d es: %d ", numeroUno, numeroDos, suma);

	return 0;
}
