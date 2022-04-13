#include "UTN.h"
#include <stdio.h>
// desarrollo de funciones con validacion de datos

int PedirDato(char*mensaje,char*mensajeError,int minimo,int maximo)
{
	int dato=0; // Inicializo el dato en 0 para que no me tome la letra
	printf("%s",mensaje);
	scanf("%d", &dato);
	fflush(stdin);
	while(dato < minimo || dato > maximo)
	{
		printf("%s", mensajeError);
		printf("%s", mensaje);
		fflush(stdin);
		scanf("%d", &dato);
	}
	return dato;

}
float PedirDatoSinMaximo(char*mensaje,char*mensajeError,int minimo)
{

	float dato;
		printf("%s",mensaje);
		fflush(stdin);
		scanf("%f", &dato);
		while(dato < minimo )
		{
			printf("%s", mensajeError);
			printf("%s", mensaje);
			fflush(stdin);
			scanf("%f", &dato);
		}
		return dato;

}
void MostrarResultados(float Precioaerolineas,float debitoAerolineas,float creditoAerolineas,float bitcoinAerolineas,float precioViajeUnitarioAerolineas,float Preciolatam,float debitoLatam,float creditoLatam,float bitcoinLatam,float precioViajeUnitarioLatam ,float diferencia)
{
	printf("\nPrecio AEROLINEAS: $%.2f\nPrecio con tarjeta de debito: $%.2f\nPrecio con tarjeta de credito: $%.2f\nPrecio pagando con Bitcoin: %.4f BTC\nPrecio Unitario:$%.2f",Precioaerolineas,debitoAerolineas,creditoAerolineas,bitcoinAerolineas,precioViajeUnitarioAerolineas);
	printf("\n\nPrecio LATAM: $%.2f\nPrecio con tarjeta de debido: $%.2f\nPrecio con tarjeta de credito: $%.2f\nPrecio pagando con Bitcoin: %.4f BTC\nPrecio Unitario:$%.2f\n\nLa diferencia de precio es de   %.2f\n",Preciolatam,debitoLatam,creditoLatam,bitcoinLatam,precioViajeUnitarioLatam,diferencia);
}
void Separador(void)
{
	printf("---------------------------------------------------\n");


}
