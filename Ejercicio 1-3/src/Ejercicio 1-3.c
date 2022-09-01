/*
 ============================================================================
SABRINA ROJAS 1D *
Ejercicio 1-3: ingresar 3 números y mostrar el número del medio, sólo si existe. En
caso de que no exista también informarlo.
Ejemplo:
1 5 3 el 3 es del medio
5 1 5 no hay número del medio
3 5 1 el 3 es del medio
3 1 5 el 3 es del medio
5 3 1 el 3 es del medio
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    setbuf(stdout, NULL);

    int numeroUno;
    int numeroDos;
    int numeroTres;

    printf("Ingresar el primer numero: ");
    scanf("%d", &numeroUno);

    printf("Ingresar el segundo numero: ");
    scanf("%d", &numeroDos);

    printf("Ingresar el tercer numero: ");
    scanf("%d", &numeroTres);

    if(numeroTres>numeroUno && numeroTres<numeroDos) //1 5 3 el 3 es del medio
    {
      printf("El numero del medio es: %d ", numeroTres);
    }
    else
    {
        if(numeroUno>numeroTres && numeroUno<numeroDos)//3 5 1 el 3 es del medio
        {
           printf("El numero del medio es: %d ", numeroUno);
        }
        else
        {
            if(numeroUno>numeroDos && numeroUno<numeroTres)//3 1 5 el 3 es del medio
            {
               printf("El numero del medio es: %d ", numeroUno);
            }
            else
            {
                if(numeroDos>numeroTres && numeroDos<numeroUno)//5 3 1 el 3 es del medio
                {
                  printf("El numero del medio es: %d ", numeroDos);
                }
                else //5 1 5 no hay número del medio
                {
                    printf("No hay numero del medio");
                }
            }
        }
    }

    return 0;

}
