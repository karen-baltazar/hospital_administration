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
 * 1/12/2020
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
		string razon, notas, indicaciones;
		Expediente expediente;
		
	// Declaración de métodos (comportamientos)
	public:
		//Constructor por default
		Paciente():Individuo(){
			nombre = " ";
			a_paterno = " ";
			a_materno = " ";
			razon = " ";
			notas = " ";
			indicaciones = " ";
			expediente = Expediente();			
		}
		
		//Constructor parametrizado
		Paciente(string n, string p, string m, string r, string nt, string i, string d, int c, bool s, bool cn, bool cm): Individuo(n, p, m){
			razon = r;
			notas = nt;
			indicaciones = i;
			expediente = Expediente(d, c, s, cn, cm);
		}
		
		// Getters()	
		string getRazon();
		string getNotas();
		string getIndicaciones();

		// Setters()		
		void setRazon(string);
		void setNotas(string);
		void setIndicaciones(string);
		
		string printPaciente();
};

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

string Paciente::printPaciente(){
	stringstream p;
	p << printNombre() << "Razón: " << razon << "\n";
	p << "Notas: " << notas << "\nIncidaciones: "  << indicaciones << "\n";
	return p.str();
}

#endif // PACIENTE_H