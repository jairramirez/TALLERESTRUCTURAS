#include <stdio.h>
#include <string.h>
/*fecha:octubre 29 de 2017*/
/* programa que recibe uno datos de un Competidor y muestra sus datos y su categoria según edad*/
/*realizado por: jair ramírez*/
struct Competidores
{
	char nombre[30];
	char sexo[10];
	char club[30];
	char categoria[10];
	int edad;
};
void datos(Competidores v[],int tamanio);
int main() 
{
 Competidores v[100];
 int tamanio=0;
 datos(v,tamanio);
	
	return 0;
}
void datos(Competidores v[],int tamanio)
{
	printf("Ingrese la cantidad de competidores \n");
	scanf("%d",&tamanio);
	printf("Ingrese los datos de los competidores \n");
	for(int i=0;i<tamanio;i++)
	{
		fflush(stdin);
		printf("nombre \n");
		fgets(v[i].nombre,30,stdin);
		
		fflush(stdin);
		printf("edad \n");
		scanf("%d",&v[i].edad);
		
		fflush(stdin);
		printf("sexo \n");
		fgets(v[i].sexo,10,stdin);
		
		fflush(stdin);
		printf("club \n");
		fgets(v[i].club,30,stdin);
		if(v[i].edad<=15)
		{
			strcpy(v[i].categoria,"infantil");
		}
		else if(v[i].edad<=30)
			{
				strcpy(v[i].categoria,"joven");
			}else{
				strcpy(v[i].categoria,"mayor");
			}
		}
	printf("\t lista de competidores  \t \n");
	for(int i=0;i<tamanio;i++)
	{
	
		printf("nombre:%s  \n",v[i].nombre);
		printf("Edad:%d  \n\n",v[i].edad);
		printf("Sexo:%s  \n",v[i].sexo);
		printf("Club:%s  \n",v[i].club);
		printf("Categoria:%s\n \n",v[i].categoria);
		printf("_________________________________\n");
	}
}

