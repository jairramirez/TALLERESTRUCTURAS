#include <stdio.h>
#include <string.h>
/*fecha:octubre 29 de 2017*/
/*programa que llena un vector con los datos de una persona y pregunta si tiene algun tipo de discapacidad y llena otros dos vectores*/
/*con los que presentan discapacidad y con los que no tienen discapacidad*/
struct personas{
	char nombre[30];
	bool discapacidad;
};

int disc = 0, sinDisc = 0;
void personitas(personas v[],int &tam);
void clasificarPersonas(personas v[], int l, int discapacidad[], int disc, int sinDiscapacidad[], int sinDisc);
int main()
{
	int discapacidad[100];
	int sinDiscapacidad[100];
	personas v[100];
	int tam=0,l;
	personitas(v,tam);
	l=tam;
	clasificarPersonas( v,l,discapacidad,disc,sinDiscapacidad,sinDisc);
	return 0;
}

void personitas(personas v[],int &tam)
{
	int i,opcion;
	char v1[100];
	printf("Ingrese Cantidad de personas:\n");
	scanf("%d",&tam);
	for (i=0;i<tam;i++){
		printf("%i.Nombre:\n",i+1);
		fflush(stdin);
		fgets(v[i].nombre,30,stdin);
		printf("Tiene alguna discapacidad:\n");
		printf("Ingrese el numero 1.Si ó 2.No\n");
		scanf("%d",&opcion);
		switch(opcion){
		case 1:
			v[i].discapacidad=true;
			break;
		case 2:
			v[i].discapacidad=false;
			break;
		}
	}
	for (i=0;i<tam;i++)
	{
		if(v[i].discapacidad==true){
			printf("Persona con discapacidad==>%s",v[i].nombre);
		}else if(v[i].discapacidad==false){
			printf("Persona sin discapacidad==>%s",v[i].nombre);
		}
	}
}

void clasificarPersonas(personas v[], int l, int discapacidad[], int disc, int sinDiscapacidad[], int sinDisc){
	int i;
	for(i = 0; i < l; i++){
		if(v[i].discapacidad == true){
			discapacidad[disc]=i;
			disc += 1;
		}else{
			sinDiscapacidad[sinDisc]=i;
			sinDisc += 1;
		}
	}
	printf("listado de personas con discapacidad \n");
	for(int i=0;i<disc;i++){
	printf("Nombre: %s \n",v[discapacidad[i]].nombre);
	}
	
	printf("listado de personas sin discapacidad \n");
	for(int i=0;i<sinDisc;i++){
		printf("Nombre: %s \n",v[sinDiscapacidad[i]].nombre);
	}
}
