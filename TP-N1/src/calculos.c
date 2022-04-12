#include "calculos.h"

float PrecioDescuento(float precio,int descuento)
{
	float porcentaje;
	float precioConDescuento;

	porcentaje=(precio*descuento)/100;
	precioConDescuento=precio-porcentaje;

	return precioConDescuento;
}
float PrecioInteres(float precio,int interes)
{
	float porcentaje;
	float precioConInteres;

	porcentaje=(precio*interes)/100;
	precioConInteres=precio+porcentaje;

	return precioConInteres;
}
float TransformarPesosABitcoin(float precioIngresado)
{
	float bitcoin;
	float precioBitcoin=4606954.55;
	int precioDeUnBitcoin=1;


	bitcoin=(precioIngresado*precioDeUnBitcoin)/precioBitcoin;

	return bitcoin;
}
float PrecioUnitario(float precioViaje,float kilometros)
{
	float precioUnitario;

	precioUnitario=precioViaje/kilometros;


	return precioUnitario;
}
float DiferenciaPrecios(float precioAerolineas,float precioLatam)
{
	float diferencia;

		diferencia=precioAerolineas-precioLatam;

	return diferencia;
}

