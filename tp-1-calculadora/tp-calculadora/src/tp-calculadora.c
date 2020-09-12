/*
 ============================================================================
 Name        : soon-to-be-calculator.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include "funciones.h"

int main()
{
	setbuf(stdout,NULL);
    int opcion;
    char seguir = 's';

    float num1=0;
    float num2=0;
    float rSuma;
    float rResta;
    float rMultiplicacion;
    float rDivision;
    float rFactorialA;
    float rFactorialB;
    int flag1=0;
    int flag2=0;
    int flag3=0;


    while (seguir == 's') {
            printf("Los operandos son A = %.2f B = %.2f \n",num1,num2);
            printf("1- ingresar operando A\n");
            printf("2- Ingresar operando B\n");
            printf("3- Realizar operaciones \n");
            printf("4- Mostrar resultados\n");
            printf("5- Salir\n");
            scanf("%d",&opcion);

            __fpurge(stdin);


            switch(opcion)
            {
            case 1:
                printf("Ingrese primer numero\n");
                __fpurge(stdin);
                scanf("%f", &num1);
                flag1=1;
                break;
            case 2:
                if(flag1==1)
                {
                    printf("Ingrese segundo numero\n");
                    __fpurge(stdin);
                    scanf("%f",&num2);
                    flag2=1;
                }
                else{
                        printf("Deberá ingresar el primer operando antes de continuar. \n");
                    };
                break;
            case 3:
                if(flag2==1)
                {
                	rSuma =sumar(num1, num2);
                	rResta=restar(num1, num2);
                    rDivision=dividir(num1,num2);
                    rMultiplicacion=multiplicar(num1,num2);
                    rFactorialA=factorizar(num1);
                    rFactorialB=factorizar(num2);
                    flag3=1;
                }
                else
                {
                    printf("Deben haberse ingresado ambos operandos antes de continuar \n");
                }
                break;
            case 4:
                if(flag3==1){
                printf("El resultado de la suma es: %.2f\n",rSuma);
                printf("El resultado de la resta es: %.2f\n",rResta);
                if(num2==0)
                {
                        printf("No se puede dividir por 0 \n");
                }
                else
                    {
                        printf("El resultado de la division es: %.2f\n",rDivision);
                    }
                printf("El resultado de la multiplicacion es: %.2f\n",rMultiplicacion);
                printf("El resultado del Factorial de A es: %.2f\n",rFactorialA);
                printf("El resultado del Factorial de B es: %.2f\n",rFactorialB);
                }
                else
                    {
                        printf("No se han realizado las operaciones");
                    }
                break;

            }
            if (flag3 == 1 && opcion == 'd') {
            	printf("Desea seguir operando? \n");
            	int c = getchar();
            	seguir = c;
            }
            if(opcion==5)
                {
                    seguir = 'n';
                    printf("Operacion terminada\n");
                break;
                }

      }
    return EXIT_SUCCESS;

}
