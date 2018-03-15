#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Fecha: Marzo 14 de 2018
Realizado por: Jair Ramírez Velásquez
Programa que: crea,lista,modifica clientes y peliculas, vende entradas para peliculas
lista cuantas entradas tiene un cliente y una pelicula, muestra la disponibilidad de entradas por pelicula.*/ 
struct clientes{
	int id;
	char nombre[30];
	int cedula;
	int telefono;
	char direccion[30];
}cliente[200],*pcliente=cliente;	
struct peliculas{
	int id;
	char nombre[30];
	int valor;
	int sillas;
	char hora[30];
	
}peliculitas[200], *ppeliculitas=peliculitas;
struct entradas{
	int id;
	int idCliente;
	int idPelicula;
	char nombrePelicula[30];
	char nombreCliente[30];
	int cedula;
	char hora[10];
	int sillas;
	int valorPelicula;
	int totalEntradas;
	
	
}entraditas[100], *pentraditas=entraditas;



int tamanio=0;
int tama=0;
int tam=0;
int tami=0;
int i;
int entradas=0;
int ct=0;

void menu();
void crearClientes();
void crearPeliculas();
void venderEntradas();
void listarClientes();
void editarClientes();
void listarPeliculas();
void editarPeliculas();
void listarEntradaClientes();
void listarEntradasPeliculas();
void sillasDisponibles();

int main() {
	
	menu();
	
	return 0;
}

void menu()
{
	int opcion;
	do{
		printf("Menu\n");
		printf("1. Crear cliente\n");
		printf("2. Crear pelicula\n");
		printf("3. Listar clientes \n");
		printf("4. Listar peliculas \n");
		printf("5. Editar cliente\n");
		printf("6. Editar peliculas\n");
		printf("7. Vender pelicula \n");
		printf("8. Listar entradas cliente\n");
		printf("9. Listar entradas peliculas\n");
		printf("10. Mostrar sillas disponibles pelicula \n");
		printf("11. salir. \n");
		printf("Ingrese una opcion: "); scanf("%d", &opcion);
		switch(opcion){
		case 1:
			crearClientes();
			break;
		case 2:
			crearPeliculas();
			break;
		case 3:
			listarClientes();
			break;
		case 4:
			listarPeliculas();
			break;
		case 5:
			editarClientes();
			break;
		case 6: 
			editarPeliculas();
			break;
		case 7:
			venderEntradas();
			break;
		case 8:
			listarEntradaClientes();
			break;
		case 9:
			listarEntradasPeliculas();
			
			break;
		case 10:
			sillasDisponibles();
			break;
		case 11:
			exit(0);
			break;		
			
		default: printf("opcion no valida\n");
		}		
	}while(opcion != 11);
}


void crearClientes()
{
	system("cls");
	int i,lon;
	printf("Ingrese la cantidad de clientes a crear \n");
	scanf("%d",&lon);
	
	for(i=tamanio;i<tamanio+lon;i++)
	{
		
		(pcliente+i)->id=1+i;
		
		printf("Numero id %d \n",(pcliente+i)->id);
		
		printf("Ingrese nombre del  cliente \n");
		fflush(stdin);
		fgets((pcliente+i)->nombre,30,stdin);
		
		
		printf("Ingrese cedula cliente \n\n");
		
		scanf("%d",&(pcliente+i)->cedula);
		
		
		printf("Ingrese telefono cliente \n\n");
		fflush(stdin);
		scanf("%d",&(pcliente+i)->telefono);
		
		
		printf("Ingrese direccion del cliente \n");
		fflush(stdin);
		fgets((pcliente+i)->direccion,30,stdin);
		
		printf("________________________________________\n");
		
	}
	
	tamanio=tamanio+lon;
	
	
}

void listarClientes(){
	
	system("cls");
	printf(">>>>>>>>>>>>>>LISTA DE CLIENTES<<<<<<<<<<<<<<<<<\n");
	for(i=0;i<tamanio;i++)
	{
		
		
		printf("id %d \n",(pcliente+i)->id);
		printf("Cedula %d \n",(pcliente+i)->cedula);
		printf("Nombre: %s \n",(pcliente+i)->nombre);
		printf("Telefono: %d \n",(pcliente+i)->telefono);
		printf("Direccion: %s \n",(pcliente+i)->direccion);
		
	}
	printf("__________________________________\n");
	
}
void editarClientes()
{
	system("cls");
	int edit;
	int opcion,opc;
	int posicion=0;
	int i;
	char bandera='f';
	printf(">>>>>>>>>>>>>>LISTA DE CLIENTES<<<<<<<<<<<<<<<<<\n");
	for(i=0;i<tamanio;i++)
	{
		
		
		printf("id %d \n",(pcliente+i)->id);
		printf("Nombre: %s \n",(pcliente+i)->nombre);
		printf("__________________________________\n");
	}
	printf("Ingrese id del cliente  a editar \n");
	scanf("%d",&edit);
	
	for(i=0;i<tamanio;i++)
	{
		if((pcliente+i)->id==edit)
		{
			posicion=i;
			bandera='v';
			printf("Cual dato desea modificar \n");
			printf("1.nombre \n");
			printf("2.cedula \n");
			printf("3.direccion \n");
			printf("4.telefono\n");
			
			scanf("%d",&opcion);
			switch(opcion)
			{
				
			case 1: fflush(stdin);
			printf ("ingrese nuevo nombre: \n");
			fgets((pcliente+posicion)->nombre,30,stdin);
			break;
			
			case 2: printf ("ingrese nuevo cedula: \n");
			scanf("%d",&(pcliente+posicion)->cedula);
			break;
			case 3: fflush(stdin);
			printf ("ingrese nueva direccion: \n");
			fgets((pcliente+posicion)->direccion,30,stdin);
			break;
			case 4: fflush(stdin);
			printf ("ingrese nuevo telefono \n");
			scanf("%d",&(pcliente+posicion)->telefono);
			break;
			default:
				system("cls");
				printf("La opcion no es valida.\n");
			}
			printf ("La nueva informacion del cliente es: \n");
			printf("id %d \n",(pcliente+posicion)->id);
			printf("Cedula %d \n",(pcliente+posicion)->cedula);
			printf("Nombre: %s \n",(pcliente+posicion)->nombre);
			printf("Telefono: %d \n",(pcliente+posicion)->telefono);
			printf("Direccion: %s \n",(pcliente+posicion)->direccion);
			
		}
		
	}
	if(bandera=='f')
	{
		printf("EL CLIENTE NO FUE  ENCONTRADO.\n");
		printf("Desea crear el nuevo cliente?. Marque 1. No desea crear cliente arque 2.\n");
		
		scanf("%d",&opc);
		switch(opc){
		case 1:
			crearClientes();
			break;
		case 2:
			system("cls");
			break;
		default:
			printf("Opcion no valida.\n");
		}	
	}
	
}

void crearPeliculas()
{
	system("cls");
	int i,lon;
	printf("Ingrese la cantidad de peliculas a crear \n");
	scanf("%d",&lon);
	
	for(i=tam;i<tam+lon;i++)
	{
		
		(ppeliculitas+i)->id= 100+i;
		printf("Numero de id %d \n",(ppeliculitas+i)->id);
		
		printf("Ingrese nombre de la pelicula \n");
		fflush(stdin);
		fgets((ppeliculitas+i)->nombre,30,stdin);
		
		
		printf("Ingrese valor \n\n");
		fflush(stdin);
		scanf("%d",&(ppeliculitas+i)->valor);
		
		
		printf("Ingrese sillas \n\n");
		fflush(stdin);
		scanf("%d",&(ppeliculitas+i)->sillas);
		
		
		printf("Ingrese hora \n");
		fflush(stdin);
		fgets((ppeliculitas+i)->hora,30,stdin);
		printf("___________________________________\n");
	}
	tam=tam+lon;	
	
}

void listarPeliculas()
{
	system("cls");
	printf(">>>>>>>>>>>>>>LISTA DE PELICULAS<<<<<<<<<<<<<<<<<\n");
	
	for(i=0;i<tam;i++)
	{
		
		
		printf("id %d \n",(ppeliculitas+i)->id);
		printf("Nombre: %s \n",(ppeliculitas+i)->nombre);
		printf("Valor: %d \n",(ppeliculitas+i)->valor);
		printf("Sillas: %d \n",(ppeliculitas+i)->sillas);
		printf("Hora: %s \n",(ppeliculitas+i)->hora);
		
	}
	printf("__________________________________\n");
	
}



void editarPeliculas()
{
	system("cls");
	char bandera='f';
	int edit;
	int opcion,opc;
	int posicion=0;
	
	printf(">>>>>>>>>>>>>>LISTA DE PELICULAS<<<<<<<<<<<<<<<<<\n");
	for(i=0;i<tam;i++)
	{
		printf("id %d \n",(ppeliculitas+i)->id);
		printf("Nombre: %s \n",(ppeliculitas+i)->nombre);
		printf("__________________________________\n");
	}
	printf ("Ingrese id de la pelicula a editar: \n");
	scanf ("%d",&edit);
	for(int i=0;i<tam;i++)
	{
		if((peliculitas+i)->id==edit)
		{
			posicion=i;
			bandera='v';
			printf("Cual dato desea modificar \n");
			printf("1.Nombre de la pelicula\n");
			printf("2.Valor \n");
			printf("3.Sillas\n");
			printf("4.Hora\n");
			
			
			scanf("%d",&opcion);
			switch(opcion)
			{
				
			case 1: fflush(stdin);
			printf ("ingrese nuevo nombre: \n");
			fgets((ppeliculitas+posicion)->nombre,30,stdin);
			break;
			
			case 2: fflush(stdin);
			printf ("ingrese nuevo valor: \n");
			scanf("%d",&(peliculitas+posicion)->valor);
			break;
			
			case 3: printf ("ingrese nueva capacidad sillas: \n");
			scanf("%d",&(peliculitas+posicion)->sillas);
			break;
			
			case 4: fflush(stdin);
			printf ("ingrese nueva hora\n");
			fgets((peliculitas+posicion)->hora,30,stdin);
			break;
			default:
				system("cls");
				printf("La opcion no es valida.\n");
			}
			
			printf ("La nueva informacion de la pelicula es: \n");
			printf("id %d \n",(ppeliculitas+posicion)->id);
			printf("Nombre: %s \n",(ppeliculitas+posicion)->nombre);
			printf("Valor: %d \n",(ppeliculitas+posicion)->valor);
			printf("Sillas disponibles: %d \n",(ppeliculitas+posicion)->sillas);
			printf("Hora: %s \n",(ppeliculitas+posicion)->hora);
			printf("__________________________________\n");
		}
	}
	
	if(bandera=='f')
	{
		printf("EL LA PELICULA NO FUE  ENCONTRADA.\n");
		printf("Desea crear la pelicula?. Marque 1. No desea crear pelicula marque 2.\n");
		
		scanf("%d",&opc);
		switch(opc){
		case 1:
			crearPeliculas();
			break;
		case 2:
			system("cls");
			break;
		default:
			printf("Opcion no valida.\n");
		}	
	}
}


void venderEntradas()
{
	system("cls");
	int idCliente;
	int posicion=0;
	int pos=0;
	int j;
	entradas++;
	
	char bandera='f';
	char band='f';
	int comprarPeli;
	printf(">>>>>>>>>>>>>>VENDER ENTRADAS DE PELICULAS<<<<<<<<<<<<<<<<<\n");
	printf(">>>>>>>>>>>>>>LISTA DE CLIENTES<<<<<<<<<<<<<<<<<\n");
	for(i=0;i<tamanio;i++)
	{
		
		
		printf("id %d \n",(pcliente+i)->id);
		printf("Nombre: %s \n",(pcliente+i)->nombre);
		printf("__________________________________\n");
	}
	
	printf("Ingrese id del cliente  \n");
	scanf("%d",&idCliente);
	
	for(j=0;j<tamanio;j++)
	{     
		
		if((pcliente+j)->id==idCliente)
		{
			
			posicion=j;
			bandera='v';
			
			strcpy((pentraditas+ct)->nombreCliente,(pcliente+posicion)->nombre);
			(pentraditas+ct)->cedula=(pcliente+posicion)->cedula;
			(pentraditas+ct)->idCliente=(pcliente+posicion)->id;
			
			printf("id cliente: %d \n",(pentraditas+ct)->idCliente);
			printf("Nombre cliente: %s \n",(pentraditas+ct)->nombreCliente);
			printf("Cedula: %d \n",(pentraditas+ct)->cedula);
			
		}
		
		
	}
	if(bandera=='f')
	{
		int opc;
		printf(">>>>>>>>>>>>>>VENDER ENTRADAS DE PELICULAS<<<<<<<<<<<<<<<<<\n");
		printf("EL CLIENTE NO FUE ENCONTRADO.\n");
		printf("Desea crear el cliente?. Marque 1. No desea crear cliente marque 2.\n");
		
		scanf("%d",&opc);
		switch(opc){
		case 1:
			crearClientes();
			break;
		case 2:
			system("cls");
			break;
		default:
			printf("Opcion no valida.\n");
		}	
	}
	if(bandera=='v')
	{
		printf(">>>>>>>>>>>>>>VENDER ENTRADAS DE PELICULAS<<<<<<<<<<<<<<<<<\n");
		printf(">>>>>>>>>>>>>>LISTA DE PELICULAS<<<<<<<<<<<<<<<<<\n");
		for(i=0;i<tam;i++)
		{
			
			
			printf("id %d \n",(ppeliculitas+i)->id);
			printf("Nombre: %s \n",(ppeliculitas+i)->nombre);
			printf("__________________________________\n");
		}
		printf("Ingrese el id de la pelicula a comprar \n");
		scanf("%d",&comprarPeli);
		for(i=0;i<tam;i++)
		{
			if((ppeliculitas+i)->id==comprarPeli)
			{
				pos=i;
				band='v';
				(pentraditas+ct)->idPelicula=(ppeliculitas+pos)->id;
				strcpy((pentraditas+ct)->nombrePelicula,(ppeliculitas+pos)->nombre);
				strcpy((pentraditas+ct)->hora,(ppeliculitas+pos)->hora);
				(pentraditas+ct)->sillas=(ppeliculitas+pos)->sillas;
				(pentraditas+ct)->valorPelicula=(ppeliculitas+pos)->valor;
				printf("ingrese cantidad de entradas a comprar \n");
				scanf("%d",&(pentraditas+ct)->totalEntradas);
				printf("*********************||**********************\n");
				printf("\n\n id pelicula %d: \n",(pentraditas+ct)->idPelicula);
				printf("Nombre pelicula %s \n",(pentraditas+ct)->nombrePelicula);
				printf("Hora %s \n",(pentraditas+ct)->hora);
				printf("Total entradas compradas %d \n",(pentraditas+ct)->totalEntradas);
				printf("Precio de la pelicula %d \n",(pentraditas+ct)->valorPelicula);
				printf("\nVENTA FINALIZADA \n");
				printf("*********************||**********************\n");
				ct++;
				
			}
			
		}
		
		if(band=='f')
		{
			int opc;
			printf(">>>>>>>>>>>>>>VENDER ENTRADAS DE PELICULAS<<<<<<<<<<<<<<<<<\n");
			printf("EL LA PELICULA NO FUE  ENCONTRADA.\n");
			printf("Desea crear la pelicula?. Marque 1. No desea crear pelicula marque 2.\n");
			
			scanf("%d",&opc);
			switch(opc){
			case 1:
				crearPeliculas();
				break;
			case 2:
				system("cls");
				break;
			default:
				printf("Opcion no valida.\n");
			}	
		}
	}
	
	
	
}


void listarEntradaClientes()
	
{
	system("cls");
	int idCliente;
	
	int sumaEntradas=0;
	printf(">>>>>>>>>>>>>>LISTA DE CLIENTES<<<<<<<<<<<<<<<<<\n");
	for(i=0;i<tamanio;i++)
	{
		
		
		printf("id %d \n",(pcliente+i)->id);
		printf("Nombre: %s \n",(pcliente+i)->nombre);
		printf("__________________________________\n");
	}
	
	printf("Ingrese el id del cliente que quiere ver sus entradas \n");
	scanf("%d",&idCliente);	
	
	for(i=0;i<ct;i++)
	{
		if((pentraditas+i)->idCliente==idCliente)
		{
			
			
			sumaEntradas+=(pentraditas+i)->totalEntradas;
			
			
		}
		
	}
	printf("El total de entradas adquiridas por el cliente fue de %d \n",sumaEntradas);
	
}


void listarEntradasPeliculas()
	
{
	system("cls");
	int idPeli;
	int sumaEntradas=0;
	printf(">>>>>>>>>>>>>>LISTA DE PELICULAS<<<<<<<<<<<<<<<<<\n");
	for(i=0;i<tam;i++)
	{
		
		
		printf("id %d \n",(ppeliculitas+i)->id);
		printf("Nombre: %s \n",(ppeliculitas+i)->nombre);
		printf("__________________________________\n");
	}
	
	printf("Ingrese el id de la pelicula que quiere ver sus entradas \n");
	scanf("%d",&idPeli);	
	
	for(i=0;i<ct;i++)
	{
		if((pentraditas+i)->idPelicula==idPeli)
		{
			sumaEntradas+=(pentraditas+i)->totalEntradas;
			
		}
		
	}
	printf("El total de entradas adquiridas para la pelicula fue de %d \n",sumaEntradas);
}
void sillasDisponibles()
{
	system("cls");
	int idPeli;
	char bandera='f';
	int sillasDisponibles;
	int sumaEntradas=0;
	int posicion=0;
	printf("Peliculas en cartelera \n");
	for(i=0;i<tam;i++)
	{
		printf("id %d \n",(ppeliculitas+i)->id);
		printf("Nombre: %s \n",(ppeliculitas+i)->nombre);
		printf("__________________________________\n");
	}
	printf("Ingrese id de la pelicula de la cual quiere ver disponibilidad de sillas \n");
	scanf("%d",&idPeli);
	
	for(i=0;i<tam;i++)
	{
		if((ppeliculitas+i)->id==idPeli)
		{
			bandera='v';
			posicion=i;
			for(i=0;i<ct;i++)
			{
				if((pentraditas+i)->idPelicula==(ppeliculitas+posicion)->id)
				{
					sumaEntradas+=(pentraditas+i)->totalEntradas;
				}
				
			}
			if((ppeliculitas+posicion)->sillas>sumaEntradas)
			{
				sillasDisponibles=(ppeliculitas+posicion)->sillas-sumaEntradas;
				printf("Las sillas disponibles para la pelicula es:%d \n",sillasDisponibles);
			}
			if(bandera=='f')
			{
				printf("La pelicula no esta en cartelera. \n");
			}
		}
	}
	
}

















