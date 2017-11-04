#include <stdio.h>
#include <string.h>
/*fecha:octubre 29 de 2017*/
/* programa que recibe los datos de n alumnos y muestra el alumno con mayor y menor promedio*/
/*realizado por: jair ramírez*/
struct promedio{
	float nota1;
	float nota2;
	float nota3;
};
struct alumnos{
	char nombre[30];
	char sexo[10];
	int edad;
	struct promedio prom;
}alumno[100];
int datos(alumnos alumno[], int tamanio);

int main() 
{
	int tamanio;
	datos(alumno,tamanio);
	return 0;
}
int datos(alumnos alumno[],int tamanio)
{
	float mayorPromedio=0;
	float menorPromedio=999999;
	int posicionMayor;
	int posicionMenor;
	float promedioAlumno;
	printf("Ingrese el numero de estudiantes \n");
	scanf("%d",&tamanio);
	for(int i=0;i<tamanio;i++)
	{
	fflush(stdin);
	printf("ingrese nombre del alumno \n");
	fgets(alumno[i].nombre,30,stdin);
	
	fflush(stdin);
	printf("ingrese el sexo del alumno \n");
	fgets(alumno[i].sexo,10,stdin);
	
	printf("ingrese edad alumno \n");
	scanf("%d",&alumno[i].edad);
	
	printf("Ingrese notas del estudiante \n ");
	scanf("%f",&alumno[i].prom.nota1);
	scanf("%f",&alumno[i].prom.nota2);
	scanf("%f",&alumno[i].prom.nota3);
	
	promedioAlumno=(alumno[i].prom.nota1+alumno[i].prom.nota2+alumno[i].prom.nota3)/3;
	if(promedioAlumno>mayorPromedio)
	{
		mayorPromedio=promedioAlumno;
		posicionMayor=i;
	}
	if(promedioAlumno<menorPromedio)
	{
		menorPromedio=promedioAlumno;
		posicionMenor=i;
	}
	}
	printf("El alumno con mayor promedio es: \n");
	printf("nombre:%s \n",alumno[posicionMayor].nombre);
	printf("sexo:  %s \n",alumno[posicionMayor].sexo);
	printf("edad:  %d \n",alumno[posicionMayor].edad);
	printf("promedio %f\n",mayorPromedio);
	
	printf("El alumno con menor promedio es: \n");
	printf("nombre:%s \n",alumno[posicionMenor].nombre);
	printf("sexo:  %s \n",alumno[posicionMenor].sexo);
	printf("edad:  %d \n",alumno[posicionMenor].edad);
	printf("promedio %f \n",menorPromedio);
}


