#include <stdio.h>

/*Fecha: noviembre 2 de  2017*/
/*Programa que define una tabla de proveedores y visualiza los datos de cada proveedor, el importe total de compra y el nombre del proveedor mas barato
y el del mas caro.*/
/*Realizado por: jair ramírez*/

struct proveedores{
	char nombre[30];
	int cantidadVendida;
	float precioUnitario;
	float importe;
};

void datos(proveedores v[],int &tam);
void mostrarDatos(proveedores v[],int tam);



int main() 
{
	int tam = 0;
	proveedores v[100];
	datos(v,tam);
	mostrarDatos(v,tam);
	return 0;
	
}

void datos(proveedores v[],int &tam)
{
	int lon;
	printf("Ingrese Cantidad de Proveedores:\n");
	scanf("%d",&lon);
	for(int i=0;i<lon;i++)
	{
		printf("\n%i.Nombre: ",i+1);
		fflush(stdin);
		fgets(v[i].nombre,30,stdin);
		printf("Cantidad Vendida: ");
		scanf("%d",&v[i].cantidadVendida);
		printf("Precio Unitario: ");
		scanf("%f",&v[i].precioUnitario);
		v[i].importe=(v[i].cantidadVendida*v[i].precioUnitario);
		tam += 1;
	}
	
	
}

void mostrarDatos(proveedores v[],int tam){
	int mayor=0;
	int menor=1;
	int i;
	for(i=0;i<tam;i++)
	{
		printf("%i.Nombre Proveedor: %s\nCantidad Vendida: %d\n Precio Unitario: %.2f\nImporte:%.2f\n",i+1,v[i].nombre,v[i].cantidadVendida,v[i].precioUnitario,v[i].importe);
		if(v[menor].importe>v[i].importe)
		{
			menor=i;
		}
		if(v[mayor].importe<v[i].importe)
		{
			mayor=i;
		}
		printf("\n\n");
	}
	
	printf("Proveedor Menor:%s",v[menor].nombre);
	printf("Proveedor Mayor:%s",v[mayor].nombre);
}


