/*
 ============================================================================
 Name        : PRACTICAS.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style



 Crear una función que permita ingresar un numero al usuario y lo retorne.
 Crear una función que reciba el radio de un círculo y retorne su área.
 Utilizar las funciones de los puntos 1 y 2 para hacer un programa que calcule el
 área de un círculo cuyo radio es ingresado por el usuario.
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
	printf("\nEl área del círculo es: %.f\n",area);





	return EXIT_SUCCESS;
}

float pedirNumero()
{
	float auxiliar;
	printf("\nIngrese un número");
	scanf("%f",&auxiliar);
	return auxiliar;
}


/**
 * \brief Recibe el radio y calcula el área del círculo
 * \param Radio correspondiente al radio del círculo
 * \return El área del círculo
 */

float calcularAreaCirculo(float radio)
{
	float resultado;
	resultado = 3.14*(radio*radio);
	return resultado;
}
