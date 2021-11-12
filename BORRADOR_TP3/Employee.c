
#include "utn_biblioteca.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "LinkedList.h"
#include "Employee.h"

Employee* employee_new()
{
	return (Employee*) malloc(sizeof(Employee));
}



Employee* employee_newParametros(char* idStr,char* nombreStr,char* horasTrabajadasStr, char* sueldoStr)
{
	Employee* thisAux;
	int idAux;
	int horasAux;
	int sueldoAux;

	thisAux = (Employee*) malloc(sizeof(Employee));

	if(esNumerica(idStr)==0 && esNumerica(horasTrabajadasStr)==0 && esNumerica(sueldoStr)==0)
	{
		idAux = atoi(idStr);
		horasAux = atoi(horasTrabajadasStr);
		sueldoAux = atoi(sueldoStr);

		employee_setId(thisAux, idAux);
		employee_setNombre(thisAux, nombreStr);
		employee_setHorasTrabajadas(thisAux, horasAux);
		employee_setSueldo(thisAux, sueldoAux);
	}

	return thisAux;
}


void employee_delete(Employee* this)
{
	free(this);
}


int employee_setNombre(Employee* this,char* nombre)
{
	strncpy(this->nombre,nombre,sizeof(this->nombre));

	return 0;
}



int employee_setHorasTrabajadas(Employee* this,int horasTrabajadas)
{
	this->horasTrabajadas = horasTrabajadas;

	return 0;
}



int employee_setSueldo(Employee* this,int sueldo)
{
	this->sueldo = sueldo;

	return 0;
}



int employee_setId(Employee* this,int id)
{
	this->id = id;

	return 0;
}


/*************************************************************/



int employee_getNombre(Employee* this,char* nombre)
{
	strncpy(nombre,this->nombre,sizeof(128));

	return 0;
}



int employee_getHorasTrabajadas(Employee* this,int* horasTrabajadas)
{
	*horasTrabajadas = this->horasTrabajadas;

	return 0;
}



int employee_getSueldo(Employee* this,int* sueldo)
{
	*sueldo = this->sueldo;

	return 0;
}



int employee_getId(Employee* this,int* id)
{
	*id = this->id;

	return 0;
}

int employee_comparaEmpleados(void* empleado1, void* empleado2)
{
	int retorno = 0;

	Employee* eAuxA;
	Employee* eAuxB;
	eAuxA = (Employee*) empleado1;
	eAuxB = (Employee*) empleado2;
	char nombreAuxA[128];
	char nombreAuxB[128];

	if(employee_getNombre(eAuxA, nombreAuxA)==0 && employee_getNombre(eAuxB, nombreAuxB)==0)
	{
		if(strncmp(nombreAuxA,nombreAuxB,128)>0)
		{
			retorno = 1;
		}
		if(strncmp(nombreAuxA,nombreAuxB,128)<0)
		{
			retorno = -1;
		}
	}


	return retorno;
}
