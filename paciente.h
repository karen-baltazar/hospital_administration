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
 * 4/12/2020
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
		// Declaración de variables de instancia
		string razon, notas, indicaciones;
		Expediente expediente;
		
	// Declaración de métodos (comportamientos)
	public:
		/* 
		 * Constructor por default
		 * @param 
		 * @return Objeto Paciente 
		*/
		Paciente():Individuo(){
			nombre = " ";
			a_paterno = " ";
			a_materno = " ";
			razon = " ";
			notas = " ";
			indicaciones = " ";
			expediente = Expediente();			
		}
		
		/* 
		 * Constructor parametrizado
		 * @param string n: nombre, string p: apellido paterno, 
		 * string m: apelldio materno, string r: razon de hospitalización, 
		 * string nt: notas del médico respecto paciente,
		 * string i: indicaciones para el paciente, string d: dirección de paciente,
		 * int c: celular en caso de emergencias,
		 * bool s: seguro de gastos médicos,
		 * bool cn: consetimiento de tratamiento,
		 * bool cm: compromiso de pago
		 * @return Objeto Paciente 
		*/
		Paciente(string n, string p, string m, string r, string nt, string i, string d, int c, bool s, bool cn, bool cm): Individuo(n, p, m){
			razon = r;
			notas = nt;
			indicaciones = i;
			expediente = Expediente(d, c, s, cn, cm);
		}
		
		// Métodos miembros de la clase
		
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

/* 
 * getter razon
 * @param 
 * @return string: razón de hospitalización
*/
string Paciente::getRazon(){
	return razon;
}

/* 
 * getter notas
 * @param 
 * @return string: notas sobre condición del paciente
*/
string Paciente::getNotas(){
	return notas;
}

/* 
 * getter indicaciones
 * @param 
 * @return string: indicaciones para el paciente
*/
string Paciente::getIndicaciones(){
	return indicaciones;
}

// Setters()

/* 
 * setter razon
 * @param string: razón de hospitalización
 * @return
*/
void Paciente::setRazon(string raz){
	razon = raz;
}

/* 
 * setter notas
 * @param string: notas sobre condición del pacientee
 * @return
*/
void Paciente::setNotas(string note){
	notas = note;
}

/* 
 * setter indicaciones
 * @param string: indicaciones para el paciente
 * @return
*/
void Paciente::setIndicaciones(string ind){
	indicaciones = ind;
}

/* 
 * Almacena valores de variables de instancia en cadena de texto
 * @param 
 * @return string: Datos de Paciente
*/
string Paciente::printPaciente(){
	stringstream p;
	p << printNombre() << "Razón: " << razon << "\n";
	p << "Notas: " << notas << "\nIncidaciones: "  << indicaciones << "\n";
	p << expediente.printExpediente();
	return p.str();
}

#endif // PACIENTE_H