#include <stdio.h>
#include <string.h>
/*fecha: octubre 29 de 2017*/
/*programa que pide los datos de tres estudiantes y mustra en pantalla el estudiante con mejor promedio*/
/*realizado por:Jair Ramírez*/
struct Estudiante{
	char nombre[30];
	char grado[20];
	int edad;
	float promedio;
}alumno[3];
void datos(Estudiante alumno[]);

int main() {
	datos(alumno);
	return 0;
}
void datos(Estudiante alumno[])
{
	
	printf("Ingrese datos del estudiante \n");
	for(int i=0;i<3;i++)
	{
		fflush(stdin);
		printf("Nombre:\n");
		fgets(alumno[i].nombre,30,stdin);
		
		
		printf("edad: \n");
		scanf("%d",&alumno[i].edad);
		
		fflush(stdin);
		printf("Grado: \n");
		fgets(alumno[i].grado,20,stdin);
		
		
		printf("promedio: \n");
		scanf("%f",&alumno[i].promedio);
	}
		if(alumno[0].promedio>alumno[1].promedio && alumno[0].promedio>alumno[2].promedio)
		{
			
		printf("El alumno con mejor promedio es: \n\n");
		printf(" Nombre: %s  \n",alumno[0].nombre);
		printf(" Edad:  %d \n\n",alumno[0].edad);
		printf(" Grado: %s \n",alumno[0].grado);
		printf(" Promedio: %f \n",alumno[0].promedio);
		}else{
			if(alumno[1].promedio>alumno[0].promedio && alumno[1].promedio>alumno[2].promedio)
			{
				
				printf("El alumno con mejor promedio es: \n\n");
				printf(" Nombre: %s  \n",alumno[1].nombre);
				printf(" Edad:  %d \n\n",alumno[1].edad);
				printf(" Grado: %s \n",alumno[1].grado);
				printf(" Promedio: %f \n",alumno[1].promedio);
			}
			else{
				if(alumno[2].promedio>alumno[0].promedio && alumno[2].promedio>alumno[1].promedio)
				{
					
					
					printf("El alumno con mejor promedio es: \n\n");
					printf(" Nombre: %s  \n",alumno[2].nombre);
					printf(" Edad:  %d \n\n",alumno[2].edad);
					printf(" Grado: %s \n",alumno[2].grado);
					printf(" Promedio: %f \n",alumno[2].promedio);
				
				}
			}
		}	
	
}
