#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*fecha:noviembre 2 de 2017*/
/* programa que permite ingresar canciones, buscar canciones, muestra lista por titulos por medio de un menu*/
/*realizado por: jair ramírez*/

struct cancionero{
	char artista[30];
	char titulo[30];
	char buscar[30];
	int duracion;
	int tamanio;
};
int i;

void llenarDatos(cancionero lista[],int &tam);
void mostrarDatos(cancionero lista[],int tam);
void mostrarTitulo(cancionero lista[],int tam);
void buscarCancion(cancionero lista[],int tam);
void adicionarCancion(cancionero lista[],int &tam);
void menu(cancionero lista[],int tam);
int main() 
{
	cancionero lista[100];
	int tam=0;
	/*llenarDatos(lista,tam);
	mostrarDatos(lista,tam);
	mostrarTitulo(lista,tam);
	buscarCancion(lista,tam);
	adicionarCancion(lista,tam);*/
	menu(lista,tam);
	return 0;
}
void llenarDatos(cancionero lista[],int &tam)
{
	
	printf("Ingrese numero de canciones a ingresar \n");
	scanf("%d",&tam);
	for(int i=0;i<tam;i++){
	fflush(stdin);
	printf("Ingrese Nombre del artista \n");
	fgets(lista[i].artista,30,stdin);
	/*printf("artista: %s \n",lista[i].artista);*/
	fflush(stdin);
	printf("Ingrese titulo \n");
	fgets(lista[i].titulo,30,stdin);
	
	printf("Ingrese durcion de la cancion \n");
	scanf("%d",&lista[i].duracion);
	
	printf("Ingresetamanio en kb \n");
	scanf("%d",&lista[i].tamanio);
	}
}
void mostrarDatos(cancionero lista[],int tam)
{
	printf("<<<<<<<<MOSTARNDO LISTA>>>>>>>>>> \n");
	for(i=0;i<tam;i++)

{
	
	printf("Artista: %s \n",lista[i].artista);
	printf("Titulo: %s \n",lista[i].titulo);
	printf("Duracion: %d segundos \n",lista[i].duracion);
	printf("Tamanio: %d KB \n",lista[i].tamanio);
}
}

void mostrarTitulo(cancionero lista[],int tam)
{
	printf("Mostrando titulos de la lista \n");
	for(i=0;i<tam;i++)
	{
	printf("%i %s \n",i+1,lista[i].titulo);	
	}
}

void buscarCancion(cancionero lista[],int tam)
{
	bool x= false;
	int contador=0;
	fflush(stdin);
	printf("Ingrese titulo de la cancion a buscar \n ");
	fgets(lista[0].buscar,30,stdin);
	for(i=0;i<tam;i++)
	{
		if(strcmp(lista[i].titulo,lista[0].buscar)==0)
		{
			x= true;
		   contador =i;
		}
		   
		
	}
	if(x==true){
		printf("cancion en contrada en la posicion %i \n",contador+1); 
	}else{
	printf("La cancion no esta en la lista \n");
	}
	
	}


void adicionarCancion(cancionero lista[],int &tam)
{
	int lon;
	printf("Ingrese numero de canciones a adicionar \n");
	scanf("%d",&lon);
	
	for(int i=tam;i<tam+lon;i++){
		fflush(stdin);
		printf("Ingrese Nombre del artista \n");
		fgets(lista[i].artista,30,stdin);
		
		fflush(stdin);
		printf("Ingrese titulo \n");
		fgets(lista[i].titulo,30,stdin);
		
		printf("Ingrese durcion de la cancion \n");
		scanf("%d",&lista[i].duracion);
		
		printf("Ingresetamanio en kb \n");
		scanf("%d",&lista[i].tamanio);
	}
	tam=tam+lon;
}

void menu(cancionero lista[],int tam)
{
int opcion=9999;

while(opcion!=0)
{

printf(">>>>>>>>>>menu<<<<<<<<<< \n\n");
printf("Elija una opcion \n");
printf("0.Salir \n");
printf("1.Ingresar cancion \n");
printf("2.Mostrar lista de canciones \n");
printf("3.Mostrar titulo  \n");
printf("4.Buscar cancion \n");
printf("5.Adicionar  cancion \n");
scanf("%d",&opcion);
switch(opcion)
{
case 0: exit(0);

case 1: llenarDatos(lista,tam);
break;

case 2: mostrarDatos(lista,tam);
break;

case 3: mostrarTitulo(lista,tam);
break;

case 4: buscarCancion(lista,tam);
break;
case 5: adicionarCancion(lista,tam);
break;

default: printf("Opcion no valida \n");
}

}
}







