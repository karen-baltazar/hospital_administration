#ifndef MEDICO_H
#define MEDICO_H


// Biblioteca
#include <iostream>
#include "individuo.h"
#include <string>
#include <sstream>

using namespace std;

/* 
 * Título: medico.h
 * Nombre: Ana Karen López Baltazar
 * Matrícula: A01707750
 * 4/12/2020
*/

/* 
 * Descripción:
 * Clase Medico que es clase hija de Individuo.
 * Captura parcialmente comportmaiento y atributos
 * de un médico ejerciendo su profesión en un hospital.
*/

// Declaración de Clase: Medico
class Medico: public Individuo{
	// Declaración de atributos (características)
	private:
		// Declaración de variables de instancia
		string titulo, especialidad;
		int h_inicio, h_fin, experiencia;		
		
	// Declaración de métodos (comportamientos)
	public:
		/* 
		 * Constructor por default
		 * @param 
		 * @return Objeto Medico 
		*/
		Medico(): Individuo(){
			titulo = " ";
			especialidad = " ";
			h_inicio = 0;
			h_fin = 0;
			experiencia = 0;		
		}
		
		/* 
		 * Constructor parametrizado
		 * @param string n: nombre, string p: apellido paterno, 
		 * string m: apelldio materno, string t: título del médico,
		 * string e: especialidad, int i: hora inicio de horario, 
		 * int f: hora fin de horario, int ex: años de experiencia
		 * @return Objeto Medico 
		*/
		Medico(string n, string p, string m, string t, string e, int i, int f, int ex): Individuo(n, p, m){
			titulo = t;
			especialidad = e;
			h_inicio = i;
			h_fin = f;
			experiencia = ex;			
		}
		
		// Métodos miembros de la clase
		
		// Getters()
		string getTitulo();
		string getEspecialidad();
		int getHorarioInicio();
		int getHorarioFin();
		int getExperiencia();
		
		// Setters()
		void setTitulo(string);
		void setEspecialidad(string);
		void setHorarioInicio(int);
		void setHorarioFin(int);
		void setExperiencia(int);
		
		string printMedico();
};

// Getters()

/* 
 * getter titulo
 * @param 
 * @return string: título del médico 
*/
string Medico::getTitulo(){
	return titulo;
}

/* 
 * getter especialidad
 * @param 
 * @return string: especialidad del médico
*/
string Medico::getEspecialidad(){
	return especialidad;
}

/* 
 * getter h_inicio
 * @param 
 * @return int: hora inicio de horario del médico
*/
int Medico::getHorarioInicio(){
	return h_inicio;
}

/* 
 * getter h_fin
 * @param 
 * @return int: hora fin de horario del médico
*/
int Medico::getHorarioFin(){
	return h_fin;
}

/* 
 * getter experiencia
 * @param 
 * @return int: experiencia del médico 
*/
int Medico::getExperiencia(){
	return experiencia;
}

// Setters()

/* 
 * setter titulo
 * @param string: título de médico
 * @return
*/
void Medico::setTitulo(string title){
	titulo = title;
}

/* 
 * setter especialidad
 * @param string: especialidad de médico
 * @return
*/
void Medico::setEspecialidad(string esp){
	especialidad = esp;
}

/* 
 * setter h_inicio
 * @param string: hora inicio de horario del médico
 * @return
*/
void Medico::setHorarioInicio(int hi){
	h_inicio = hi;
}

/* 
 * setter h_fin
 * @param int: hora fin de horario del médico
 * @return
*/
void Medico::setHorarioFin(int hf){
	h_fin = hf;
}

/* 
 * setter experiencia
 * @param int: experiencia en años de médico
 * @return
*/
void Medico::setExperiencia(int exp){
	experiencia = exp;
}

/* 
 * Almacena valores de variables de instancia en cadena de texto
 * @param 
 * @return string: Datos de Médico
*/
string Medico::printMedico(){
	stringstream m;
	m << printNombre() << "Título: " << titulo << "\n";
	m << "Especialidad: " << especialidad << "\n";
	m << "Horario: " << h_inicio << ":00 - " << h_fin << ":00" << "\nExperiencia: " << experiencia << " años \n";
	return m.str();
}

#endif // MEDICO_H