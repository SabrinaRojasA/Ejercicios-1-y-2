/*
 ============================================================================
SABRINA ROJAS 1D
Ejercicio 2-2: Ingresar números enteros, hasta que el usuario pida. Mostrar:
a) El promedio de los positivos y su mínimo.
b) El promedio de los negativos y su máximo.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
		setbuf(stdout, NULL);

	    int respuesta;
	    int numero;
	    int acumuladorPositivos;
	    int contadorPositivos;
	    int acumuladorNegativos;
	    int contadorNegativos;
	    float promedioPositivos;
	    float promedioNegativos;
	    int minimoPositivo;
	    int maximoNegativo;

	    respuesta = 1;
	    acumuladorPositivos = 0;
	    contadorPositivos = 0;
	    acumuladorNegativos = 0;
	    contadorNegativos = 0;

	    while(respuesta)
	    {
	       printf("Ingrese un numero: ");
	       scanf("%d", &numero);

	       if(numero > 0)
	       {
	           if(numero<minimoPositivo || contadorPositivos == 0)
	           {
	               minimoPositivo = numero;
	           }

	           acumuladorPositivos += numero;
	           contadorPositivos ++;
	       }
	       else
	       {
	            if(numero>maximoNegativo || contadorNegativos == 0)
	            {
	               maximoNegativo = numero;
	            }

	           acumuladorNegativos += numero;
	           contadorNegativos ++;
	       }

	       printf("Desea Ingresar otro numero? [1=SI o 0=NO] : ");
	       scanf("%d", &respuesta);

	    }

	   promedioPositivos = (float) acumuladorPositivos / contadorPositivos;
	   promedioNegativos = (float) acumuladorNegativos / contadorNegativos;

	   printf("El promedio de los numeros positivos es: %.2f \n", promedioPositivos);
	   printf("El promedio de los numeros negativos es: %.2f \n", promedioNegativos);
	   printf("El minimo positivo es: %d \n", minimoPositivo);
	   printf("El maximo negativo es: %d", maximoNegativo);


	    return 0;
}
