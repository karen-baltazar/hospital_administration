#ifndef EXPEDIENTE_H
#define EXPEDIENTE_H

// Biblioteca
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

/* 
 * Título: expediente.h
 * Nombre: Ana Karen López Baltazar
 * Matrícula: A01707750
 * 4/12/2020
*/

/* 
 * Descripción:
 * Clase Expediente que es componente de la clase
 * Paciente. Captura atributos y datos
 * contenidos en un Expediente Médico.
*/

// Declaración de Clase: Expediente
class Expediente{
	// Declaración de atributos (características)
	private:
		// Declaración de variables de instancia
		string direccion;
		int celular_familiar;
		bool seguro, consetimiento, compromiso;
		
	// Declaración de métodos (comportamientos)
	public:
		//Constructor por default y parametrizado
		Expediente();
		Expediente(string d, int c, bool s, bool cn, bool cm);
		
		// Métodos miembros de la clase
		
		// Getters()
		string getDireccion();
		int getCelular();
		bool getSeguro();
		bool getConsentimiento();
		bool getCompromiso();
		
		// Setters()
		void setDireccion(string);
		void setCelular(int);
		void setSeguro(bool);
		void setConsentimiento(bool);
		void setCompromiso(bool);
		
		string printExpediente();
};

/* 
 * Constructor por default
 * @param 
 * @return Objeto Expediente 
*/
Expediente::Expediente(){
	direccion = " ";
	celular_familiar = 0;
	seguro = false;
	consetimiento = false;
	compromiso = false;
}

/* 
 * Constructor parametrizado
 * @param string d: dirección de paciente,
 * int c: celular en caso de emergencias,
 * bool s: seguro de gastos médicos,
 * bool cn: consetimiento de tratamiento,
 * bool cm: compromiso de pago
 * @return Objeto Expediente 
*/
Expediente::Expediente(string d, int c, bool s, bool cn, bool cm){
	direccion = d;
	celular_familiar = c;
	seguro = s;
	consetimiento = cn;
	compromiso = cm;
}

// Getters()

/* 
 * getter direccion
 * @param 
 * @return string: direccion del paciente
*/
string Expediente::getDireccion(){
	return direccion;
}

/* 
 * getter celular_familiar
 * @param 
 * @return int: celular en caso de emergencia
*/
int Expediente::getCelular(){
	return celular_familiar;
}

/* 
 * getter seg
 * @param 
 * @return bool: seguro de gastos médicos
*/
bool Expediente::getSeguro(){
	return seg;
}

/* 
 * getter consetimiento
 * @param 
 * @return bool: consetimiento de tratamiento
*/
bool Expediente::getConsentimiento(){
	return consetimiento;
}

/* 
 * getter compromiso
 * @param 
 * @return bool: compromiso de pago
*/
bool Expediente::getCompromiso(){
	return compromiso;
}

// Setters()

/* 
 * setter direccion
 * @param string: direccion del paciente
 * @return
*/
void Expediente::setDireccion(string dir){
	direccion = dir;
}

/* 
 * setter celular_familiar
 * @param string: celular en caso de emergencia
 * @return
*/
void Expediente::setCelular(int cel){
	celular_familiar = cel;
}

/* 
 * setter seguro
 * @param string: seguro de gastos de médicos
 * @return
*/
void Expediente::setSeguro(bool seg){
	seguro = seg;
}

/* 
 * setter consetimiento
 * @param string: consetimiento de tratamiento
 * @return
*/
void Expediente::setConsentimiento(bool cons){
	consetimiento = cons;
}

/* 
 * setter compromiso
 * @param string: compromiso de pago
 * @return
*/
void Expediente::setCompromiso(bool comp){
	compromiso = comp;
}

/* 
 * Almacena valores de variables de instancia en cadena de texto
 * @param 
 * @return string: Datos de Expediente
*/
string Expediente::printExpediente(){
	stringstream expd;
	expd << "Expediente Médico. \nDirección: " << direccion << "\nCelular (en caso de emergencias): " << celular_familiar;
	if (seguro == true)
		expd << "\nSeguro de Gastos Médicos: Sí";
	else
		expd << "\nSeguro de Gastos Médicos: No";
		
	if (consetimiento == true)
		expd << "\nConsentimiento de tratamiento: Sí";
	else
		expd << "\nConsentimiento de tratamiento: No";
		
	if (compromiso == true)
		expd << "\nComrpomiso de pago: Sí \n";
	else
		expd << "\nComrpomiso de pago: No \n";
		
	return expd.str();
}

#endif // EXPEDIENTE_H