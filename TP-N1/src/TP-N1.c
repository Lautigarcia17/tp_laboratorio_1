/*
 ============================================================================
 Name        : TP-N1
 Author      : Lautaro Nahuel Garcia
 Division     : B
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "UTN.h"
#include "calculos.h"

int main(void)
{
	setbuf(stdout, NULL);


		int opcion;  // Menu
		int opcionPrecios; // Menu precios
		float kilometros;
		float Precioaerolineas;
		float Preciolatam;
		int interes;
		int descuento;
		int banderaKilometros;
		banderaKilometros=0;
		int banderaPreciosLatam;
		banderaPreciosLatam=0;
		int banderaPrecioAerolineas;
		banderaPrecioAerolineas=0;
		//AEROLINEAS
		float debitoAerolineas;
		float creditoAerolineas;
		float bitcoinAerolineas;
		float precioViajeUnitarioAerolineas;
		//
		// LATAM
		float debitoLatam;
		float creditoLatam;
		float bitcoinLatam;
		float precioViajeUnitarioLatam;
		//
		float diferencia;
		//
		interes=25;
		descuento=10;
		//CARGA FORZADA
		int precioAerolineasDefault;
		precioAerolineasDefault=162965;
		int precioLatamDefault;
		precioLatamDefault=159339;
		int kilometrosDefault;
		kilometrosDefault=7090;

	do
	{


		opcion=PedirDato("\n1.Ingresar kilometros\n2.Ingresar Precio de Vuelos.\n3.Calcular todos los costos.\n4.Informar Resultados.\n5.Carga forzada de datos.\n6.Salir.\n\nIngrese una opcion: ","Error, reingrese un numero\n\n",1,6);
		switch(opcion)
		{
		case 1:
			kilometros=PedirDatoSinMaximo("\nIngrese los kilometros:","Error, reingrese los kilometros\n",1);
			banderaKilometros=1;
		break;
		case 2:
			do{
				opcionPrecios=PedirDato("1.Ingresar Precio Aerolineas \n2.Ingresar Precio Latam.\n\nIngrese una opcion:  ","Error, reingrese un numero\n",1,2);
				switch(opcionPrecios)
				{
					case 1:
						if(banderaPrecioAerolineas==0)
						{
						Precioaerolineas=PedirDatoSinMaximo("\n-Precio vuelo Aerolineas : ","\nError,reingrese el precio\n",1);
						banderaPrecioAerolineas=1;
						}
						else
						{
							printf("\nError, no puede ingresar 2 veces un mismo precio\n");
						}
					break;
					case 2:
						if(banderaPreciosLatam==0)
						{
							Preciolatam=PedirDatoSinMaximo("\n-Precio vuelo Latam: ","\nError,reingrese el precio: \n",1);
							banderaPreciosLatam=1;
						}
						else
						{
							printf("\nError, no puede ingresar 2 veces un mismo precio\n");
						}
					break;
				}
			}while(banderaPrecioAerolineas==0 || banderaPreciosLatam==0);
		break;
		case 3:
			if(banderaPreciosLatam==1 && banderaKilometros==1 && banderaPrecioAerolineas==1)
			{
				debitoAerolineas=PrecioDescuento(Precioaerolineas,descuento);
				creditoAerolineas=PrecioInteres(Precioaerolineas,interes);
				bitcoinAerolineas=TransformarPesosABitcoin(Precioaerolineas);
				precioViajeUnitarioAerolineas=PrecioUnitario(Precioaerolineas,kilometros);
				debitoLatam=PrecioDescuento(Preciolatam,descuento);
				creditoLatam=PrecioInteres(Preciolatam,interes);
				bitcoinLatam=TransformarPesosABitcoin(Preciolatam);
				precioViajeUnitarioLatam=PrecioUnitario(Preciolatam,kilometros);
				diferencia=DiferenciaPrecios(Precioaerolineas,Preciolatam);
				if(diferencia<0)
				{
					diferencia=DiferenciaPrecios(Preciolatam,Precioaerolineas);
				}
				printf("\nLos calculos se han realizado correctamente\n¡¡ Ingrese la opcion 4 para verlos !!\n");
			}
			else
			{
				printf("\nDebe ingresar los kilometros y los precios  de aerolineas y latam antes de continuar.\n");
			}
		break;
		case 4:
			if(banderaPreciosLatam==1 && banderaKilometros==1 && banderaPrecioAerolineas==1)
			{
				MostrarResultados(Precioaerolineas,debitoAerolineas, creditoAerolineas, bitcoinAerolineas, precioViajeUnitarioAerolineas,Preciolatam ,debitoLatam, creditoLatam, bitcoinLatam, precioViajeUnitarioLatam , diferencia);
			}
			else
			{
				printf("\n Para continuar debe calcular los precios primero.\n");
			}
		break;
		case 5:

			debitoAerolineas=PrecioDescuento(precioAerolineasDefault,descuento);
			creditoAerolineas=PrecioInteres(precioAerolineasDefault,interes);
			bitcoinAerolineas=TransformarPesosABitcoin(precioAerolineasDefault);
			precioViajeUnitarioAerolineas=PrecioUnitario(precioAerolineasDefault,kilometrosDefault);
			debitoLatam=PrecioDescuento(precioLatamDefault,descuento);
			creditoLatam=PrecioInteres(precioLatamDefault,interes);
			bitcoinLatam=TransformarPesosABitcoin(precioLatamDefault);
			precioViajeUnitarioLatam=PrecioUnitario(precioLatamDefault,kilometrosDefault);
			diferencia=DiferenciaPrecios(precioAerolineasDefault,precioLatamDefault);
			MostrarResultados( precioAerolineasDefault,debitoAerolineas, creditoAerolineas, bitcoinAerolineas, precioViajeUnitarioAerolineas,precioLatamDefault,debitoLatam, creditoLatam, bitcoinLatam, precioViajeUnitarioLatam , diferencia);
		break;
		}
		Separador();
	}while(opcion!=6);
	printf("¡¡¡ BUEN VIAJE !!!");
	return EXIT_SUCCESS;
}


