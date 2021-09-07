/*
 ============================================================================
 Name        : PRACTICAS.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style



 Crear una funci�n que permita ingresar un numero al usuario y lo retorne.
 Crear una funci�n que reciba el radio de un c�rculo y retorne su �rea.
 Utilizar las funciones de los puntos 1 y 2 para hacer un programa que calcule el
 �rea de un c�rculo cuyo radio es ingresado por el usuario.
 Documentar las funciones al estilo Doxygen.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

float pedirNumero();
float calcularAreaCirculo(float radio);

int main(void) {
	setbuf(stdout,NULL);


	float auxiliar_float;
	float area;

	auxiliar_float = pedirNumero();
	area = calcularAreaCirculo(auxiliar_float);
	printf("\nEl �rea del c�rculo es: %.f\n",area);





	return EXIT_SUCCESS;
}

float pedirNumero()
{
	float auxiliar;
	printf("\nIngrese un n�mero");
	scanf("%f",&auxiliar);
	return auxiliar;
}


/**
 * \brief Recibe el radio y calcula el �rea del c�rculo
 * \param Radio correspondiente al radio del c�rculo
 * \return El �rea del c�rculo
 */

float calcularAreaCirculo(float radio)
{
	float resultado;
	resultado = 3.14*(radio*radio);
	return resultado;
}
