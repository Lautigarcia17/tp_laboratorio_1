

#ifndef UTN_H_
#define UTN_H_
// prototipos de funciones  con validacion de datos

///  Pedir datos y validarlos , teniendo un minimo y un maximo
///
/// mensaje
/// mensaje error
/// minimo
/// maximo
/// Un dato validado con un rango minimo y maximo, teniendo la posiblidad de escribir un mensaje y un mensaje error
int PedirDato(char*,char*,int,int);


/// Pedir datos y validarlos , teniendo un minimo pero no un maximo

/// mensaje
/// mensaje error
/// minimo
/// Un dato validado con un rango minimo , teniendo la posiblidad de escribir un mensaje y un mensaje error
float PedirDatoSinMaximo(char*,char*,int);



/// Funcion para mostrar los resultados@brief
///
///  debito de Aerolineas
///  credito de Aerolineas
/// bitcoin de Aerolineas
/// precio Viaje Unitario Aerolineas

/// debito de Latam
/// credito de Latam
/// bitcoin Latam
/// precio de Viaje Unitario Latam
/// diferencia de precios entre los
void MostrarResultados(float,float,float,float,float,float,float,float,float,float,float);
#endif /* UTN_H_ */
/// Linea para separar el codigo
///
void Separador(void);


