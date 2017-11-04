#include <stdio.h>
#include <string.h>
/*fecha: 29 de octubre de 2017*/
/*programa que calcula el empleado con mayor y menor salario*/
/*realizado por jair ramírez*/
struct trabajadores{
	char nombre[30];
	char cargo[30];
	float salario;
	
};
void datos(trabajadores trabajador[], int tamanio);
int main() {
	trabajadores trabajador[100];
	int tamanio;
	datos(trabajador,tamanio);
	return 0;
}
void datos(trabajadores trabajador[], int tamanio)
{
	int mayor=1;
	int menor=999999999;
	int posicionMayor;
	int posicionMenor;
	printf("Ingrese la cantidad de trabajadores \n");
	scanf("%d",&tamanio);
	for(int i=0;i<tamanio;i++)
	{
		fflush(stdin);
		printf("Nombre: \n");
		fgets(trabajador[i].nombre,30,stdin);
		
		fflush(stdin);
		printf("Cargo: \n");
		fgets(trabajador[i].cargo,30,stdin);
		
		
		printf("Salario: \n");
		scanf("%f",&trabajador[i].salario);
		
		if(trabajador[i].salario>mayor)
		{
			mayor=trabajador[i].salario;
			posicionMayor=i;
		}
		
		if(trabajador[i].salario<menor)
		{
			menor=trabajador[i].salario;
			posicionMenor=i;
		}
		
	}
	printf("Empleado con mayor salario \n");
	printf("Nombre:%s \t Cargo: %s \t Salario: %f \t \n \n", trabajador[posicionMayor].nombre,trabajador[posicionMayor].cargo,trabajador[posicionMayor].salario);
	printf("Empleado con menor salario \n");
	printf("Nombre:%s \t Cargo: %s \t Salario: %f \t \n \n", trabajador[posicionMenor].nombre,trabajador[posicionMenor].cargo,trabajador[posicionMenor].salario);
	
}

