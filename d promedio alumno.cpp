#include <stdio.h>
#include <string.h>
/*fecha:octubre 29 de 2017*/
/* programa que muestra datos del estudiante y calcula su promedio*/
/*realizado por: jair ramírez*/

struct promedio{
	float nota1;
	float nota2;
	float nota3;
};
struct alumno{
	char nombre[30];
	char sexo[10];
	int edad;
	struct promedio prom;
}alumno1;
void datos(alumno alumno1);

int main() 
{
	datos(alumno1);
	return 0;
}
void datos(alumno alumno1)
{
	float promedioAlumno;
	fflush(stdin);
	printf("ingrese nombre del alumno \n");
	fgets(alumno1.nombre,30,stdin);
	
	fflush(stdin);
	printf("ingrese el sexo del alumno \n");
	fgets(alumno1.sexo,10,stdin);
	
	printf("ingrese edad alumno \n");
	scanf("%d",&alumno1.edad);
	
	printf("Ingrese notas del estudiante \n ");
	scanf("%f",&alumno1.prom.nota1);
	scanf("%f",&alumno1.prom.nota2);
	scanf("%f",&alumno1.prom.nota3);
	
	promedioAlumno=(alumno1.prom.nota1+alumno1.prom.nota2+alumno1.prom.nota3)/3;
	
	printf("Mostrando datos del alumno \n");
	printf("nombre:%s \n",alumno1.nombre);
	printf("sexo:  %s \n",alumno1.sexo);
	printf("edad:  %d \n",alumno1.edad);
	printf("promedio: %f \n",promedioAlumno);
}
