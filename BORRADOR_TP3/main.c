#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "Controller.h"
#include "Employee.h"
#include "FuncionesVarias.h"
#include "parser.h"

/****************************************************
    Menu:
     1. Cargar los datos de los empleados desde el archivo data.csv (modo texto).
     2. Cargar los datos de los empleados desde el archivo data.csv (modo binario).
     3. Alta de empleado
     4. Modificar datos de empleado
     5. Baja de empleado
     6. Listar empleados
     7. Ordenar empleados
     8. Guardar los datos de los empleados en el archivo data.csv (modo texto).
     9. Guardar los datos de los empleados en el archivo data.csv (modo binario).
    10. Salir
*****************************************************/



int main()
{
	setbuf(stdout,NULL);

    int option;


    LinkedList* listaEmpleados = ll_newLinkedList();
    do{

    	employee_menu(&option);
    	printf("\n");

        switch(option)
        {
            case 1:
                if(controller_loadFromText("data.csv",listaEmpleados)==0)
                {
                	puts("Archivo cargado en modo texto\n");
                }
                break;
            case 2:
            	if(controller_loadFromBinary("data.csv",listaEmpleados)==0)
            	{
            		puts("Archivo cargado en modo binario\n");
            	}
            	break;
            case 3:
            	if(controller_addEmployee(listaEmpleados)==0)
            	{
            		puts("Empleado agregado correctamente\n");
            	}
				break;
			case 4:
				if(controller_editEmployee(listaEmpleados)==0)
				{
					puts("Datos modificados correctamente\n");
				}
				break;
			case 5:
				if(controller_removeEmployee(listaEmpleados)==0)
				{
					puts("Datos eliminados correctamente\n");
				}
				break;
			case 6:
				controller_ListEmployee(listaEmpleados);
				break;
			case 7:
				controller_sortEmployee(listaEmpleados);
				break;
			case 8:
				if(controller_saveAsText("dataGeneradoT.csv",listaEmpleados)==0)
				{
					puts("Datos guardados correctamente en modo texto\n");
				}
				break;
			case 9:
				controller_saveAsBinary("dataGeneradoB.csv",listaEmpleados);
				break;
			default:
				puts("Terminado");
				ll_deleteLinkedList(listaEmpleados);
				break;
        }
    }while(option != 10);




    return 0;

}



