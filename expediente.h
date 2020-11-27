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
 * 27/11/2020
*/

/* 
 * Descripción:
 * Clase Expediente que es componente de la clase
 * hija Paciente. Caputa atributos y datos
 * apegados a un Expediente Médico.
*/

// Declaración de Clase: Expediente
class Expediente{
	// Declaración de atributos (características)
	private:
		// Identificación
		string direccion;
		int celular_familiar;
		bool seguro;
		bool consetimiento;
		bool compromiso;
		
	// Declaración de métodos (comportamientos)
	public:
		//Constructores
		Expediente();
		// Expediente(string d, int c, bool s, bool cn, bool cm);
		
		// Setters()
		void setDireccion(string);
		void setCelular(int);
		void setSeguro(bool);
		void setConsentimiento(bool);
		void setCompromiso(bool);
		
		string printExpediente();
};

// Constructor por default
Expediente::Expediente(){
	direccion = " ";
	celular_familiar = 0;
	seguro = false;
	consetimiento = false;
	compromiso = false;
}

// Constructor parametrizado
// Expediente::Expediente(string d, int c, bool s, bool cn, bool cm){
	// direccion = d;
	// celular_familiar = c;
	// seguro = s;
	// consetimiento = cn;
	// compromiso = cm;
// }

// Setters()
void Expediente::setDireccion(string dir){
	direccion = dir;
}

void Expediente::setCelular(int cel){
	celular_familiar = cel;
}

void Expediente::setSeguro(bool seg){
	seguro = seg;
}

void Expediente::setConsentimiento(bool cons){
	consetimiento = cons;
}

void Expediente::setCompromiso(bool comp){
	compromiso = comp;
}

string Expediente::printExpediente(){
	stringstream expd;
	expd << "Expediente Médico. \nDirección: " << direccion << "\nCelular: " << celular_familiar;
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