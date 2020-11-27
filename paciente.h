#ifndef PACIENTE_H
#define PACIENTE_H

// Biblioteca
#include <iostream>
#include "individuo.h"
#include "expediente.h"
#include <string>
#include <sstream>

using namespace std;

/* 
 * Título: paciente.h
 * Nombre: Ana Karen López Baltazar
 * Matrícula: A01707750
 * 27/11/2020
*/

/* 
 * Descripción:
 * Clase Paciente que es clase hija de Individuo.
 * Captura parcialmente comportmaiento y atributos
 * de un paciente en hospital.
*/

// Declaración de Clase: Paciente
class Paciente: public Individuo{
	// Declaración de atributos (características)
	private:
		// Identificación
		string nombre;
		string a_paterno;
		string a_materno;
		string razon;
		string notas;
		string indicaciones;
		int id;
		Expediente expediente;
		
	// Declaración de métodos (comportamientos)
	public:
		//Constructores
		Paciente();
		Paciente(string r, string n, string i, int ide);
		
		// Getters()	
		string getRazon();
		string getNotas();
		string getIndicaciones();
		int getID();

		// Setters()		
		void setRazon(string);
		void setNotas(string);
		void setIndicaciones(string);
		void setID(int);
		
		// void crearExpediente(string d, int c, bool s, bool cn, bool cm);
		string printPaciente();
};

// Constructor por default
Paciente::Paciente(){
	nombre = " ";
	a_paterno = " ";
	a_materno = " ";
	razon = " ";
	notas = " ";
	indicaciones = " ";
	id = 0;
	expediente = Expediente();
}

// Constructor parametrizado
// Paciente::Paciente(string r, string n, string i, int ide){
	// razon = r;
	// notas = n;
	// indicaciones = i;
	// int id = ide;
// }

// Getters()
string Paciente::getRazon(){
	return razon;
}

string Paciente::getNotas(){
	return notas;
}

string Paciente::getIndicaciones(){
	return indicaciones;
}

int Paciente::getID(){
	return id;
}

// Setters()
void Paciente::setRazon(string raz){
	razon = raz;
}

void Paciente::setNotas(string note){
	notas = note;
}

void Paciente::setIndicaciones(string ind){
	indicaciones = ind;
}

void Paciente::setID(int ident){
	id = ident;
}

// void Paciente::crearExpediente(string d, int c, bool s, bool cn, bool cm){
	// expediente = Expediente(d, c, s, cn, cm);	
// }

string Paciente::printPaciente(){
	stringstream vis;
	vis << "Razón: " << razon << "\nNotas: " << notas << "\nIncidaciones: "  << indicaciones << "\nID: "  << id << "\n";
	// vis << expediente.printExpediente();
	return vis.str();
}

#endif // PACIENTE_H