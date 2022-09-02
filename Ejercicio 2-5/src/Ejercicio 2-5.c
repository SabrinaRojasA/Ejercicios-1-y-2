/*
 ============================================================================
 SABRINA ROJAS 1D
Ejercicio 2-5:*
Debemos generar el pedido de libretas universitarias a la imprenta para los alumnos
al regreso a la presencialidad. De cada persona debemos obtener los siguientes
datos:
número de legajo (4 cifras sin ceros a la derecha),
estado civil ('s' para soltero", 'c' para casado o 'v' viudo),
edad (más de 17),
año de ingreso (validar por favor)
y género ('f' para femenino, 'm' para masculino, 'o' para no binario).
NOTA: El precio por libreta universitaria es de $450.
Se debe informar (solo si corresponde):
a) La cantidad de personas mayores de 60 años.
b) El legajo y edad de la mujer que ingreso hace más tiempo.
c) Cuanto debe abonar la facultad por las libretas sin el descuento
d) Si se solicitan mas de 5 libretas hay un 5% de descuento, si se solicitan más de
10 libretas se hace 10%. Además, por cada alumno mayor de 60 años al valor original
de la libreta se le hace un 25%. Informar los valores si corresponde.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define LIBRETA 450

int main()
{
	setbuf(stdout, NULL);

	int respuesta;
	int legajo;
	char estadoCivil;
	int edad;
	int anioDeIngreso;
	//int tiempoMayorEdad;
	int anioValido;
	char genero;
	//A
	int contadorSesenta;
	//B
	int primerIngreso;
	int legajoPrimerIngreso;
	int edadPrimerIngreso;
	int banderaPrimerIngreso;
	//C
	int contadorAlumnos;
	int precioTotalLibretas;
	//D
	float valorConDescuento;
	float descuentoSesenta;


	//A
	contadorSesenta = 0;
	//B
	banderaPrimerIngreso = 0;
	//c
	contadorAlumnos = 0;


	respuesta = 1;

	while(respuesta)
	{
		printf("Alumno Numero %d :", contadorAlumnos+1);

		printf("\nIngrese el numero de Legajo: ");
		scanf("%d", &legajo);

		while(legajo < 1000 || legajo > 10000)
		{
			printf("Reingrese el numero de Legajo: ");
			scanf("%d", &legajo);
		}

		printf("Ingrese el estado civil [S=Soltero, C=Casado, V=Viudo]: ");
		fflush(stdin);
		scanf("%c", &estadoCivil);
		estadoCivil = toupper(estadoCivil);

		while(estadoCivil != 'S' && estadoCivil != 'C' && estadoCivil != 'V')
		{
			printf("Reingrese el estado civil [S=Soltero, C=Casado, V=Viudo]: ");
			fflush(stdin);
			scanf("%c", &estadoCivil);
			estadoCivil = toupper(estadoCivil);
		}

		printf("Ingrese la edad del alumno: ");
		scanf("%d", &edad);

		while(edad < 18)
		{
			printf("Reingrese la edad del alumno: ");
			scanf("%d", &edad);
		}

		//tiempoMayorEdad = edad - 18;
		anioValido = 2022 - (edad-18);

		printf("Ingrese el año de ingreso: ");
		scanf("%d", &anioDeIngreso);

		while(anioDeIngreso < anioValido || anioDeIngreso > 2022)
		{
			printf("Reingrese el año de ingreso: ");
			scanf("%d", &anioDeIngreso);
		}

		printf("Ingrese el genero [F=Femenino, M=Masculino, O=No Binario]: ");
		fflush(stdin);
		scanf("%c", &genero);
		genero = toupper(genero);

		while(genero != 'F' && genero != 'M' && genero != 'O')
		{
			printf("Reingrese el genero [F=Femenino, M=Masculino, O=No Binario]: ");
			fflush(stdin);
			scanf("%c", &genero);
			genero = toupper(genero);
		}
		//A
		if(edad>60)
		{
			contadorSesenta++;
		}
		//B
		if(genero == 'F')
		{
			if(anioDeIngreso < primerIngreso || banderaPrimerIngreso == 0)
			{
				primerIngreso = anioDeIngreso;
				legajoPrimerIngreso = legajo;
				edadPrimerIngreso = edad;
				banderaPrimerIngreso = 1;
			}
		}

		//c
		contadorAlumnos++;

		printf("\nDesea ingresar los datos de otro alumno? [1=SI o 0=NO]: ");
		scanf("%d", &respuesta);

	} //FIN WHILE

	//C
	precioTotalLibretas = LIBRETA * contadorAlumnos;

	//D
	if(contadorAlumnos > 10)
	{
		valorConDescuento = (float) precioTotalLibretas - (precioTotalLibretas * 10 / 100);

		if(contadorSesenta != 0)
		{
			descuentoSesenta =(float) (LIBRETA * 25 / 100) * contadorSesenta;
			valorConDescuento = valorConDescuento - descuentoSesenta;
		}
	}
	else
	{
		if(contadorAlumnos > 5)
		{
			valorConDescuento = (float) precioTotalLibretas - (precioTotalLibretas * 5 / 100);

			if(contadorSesenta != 0)
			{
				descuentoSesenta =(float) (LIBRETA * 25 / 100) * contadorSesenta;
				valorConDescuento = valorConDescuento - descuentoSesenta;
			}
		}
		else
		{
			if(contadorSesenta != 0)
			{
				descuentoSesenta =(float) (LIBRETA * 25 / 100) * contadorSesenta;
				valorConDescuento = precioTotalLibretas - descuentoSesenta;
			}
		}
	}


	//A
	if(contadorSesenta != 0)
	{
		printf("\nHay %d alumnos mayores de 60 años.", contadorSesenta);
	}
	//B
	if(banderaPrimerIngreso ==1)
	{
		printf("\nEl Legajo de la mujer que ingresó hace más tiempo es %d, y su edad es %d.", legajoPrimerIngreso, edadPrimerIngreso);
	}

	//C
	printf("\nLa Facultad debe abonar un total de $ %d en libretas sin descuento. ", precioTotalLibretas);

	//D
	if(contadorAlumnos>10)
	{
		printf("\nPor generar el pedido de más de 10 libretas, la Facultad debe abonar un total de $ %.2f en libretas. ", valorConDescuento);
	}
	else
	{
		if(contadorAlumnos>5)
		{
			printf("\nPor generar el pedido de más de 5 libretas, la Facultad debe abonar un total de $ %.2f en libretas. ", valorConDescuento);
		}
		else
		{
			if(contadorSesenta != 0)
			{
				printf("\nEl valor con descuento, por alumnos mayores de 60 años que debe abonar la Facultad es $ %.2f", valorConDescuento);
			}
			else
			{
				printf("\nNo hay descuento en Libretas.");
			}
		}
	}

	return 0;
}
